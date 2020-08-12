/*******************************************************************************
* File Name: main.c
*
* Version: 1.00
*
* Description:
*  This is the source code for the example project of the RTC_P4 component.
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <project.h>
#include <stdio.h>

#define LFCLK_CYCLES_PER_SECOND     (3276)//(16384)//(32768u)

#define WCO_STARTUP_DELAY_CYCLES    (LFCLK_CYCLES_PER_SECOND)

/* Time: 13:48:00 */
#define TIME_HOUR           (0x13u)
#define TIME_MIN            (0x48u)
#define TIME_SEC            (0x00u)
#define HOUR_OFFSET         (16u)
#define MIN_OFFSET          (8u)
#define TIME_HR_MIN_SEC     ((uint32)(TIME_HOUR << HOUR_OFFSET) | \
                            (uint32)(TIME_MIN << MIN_OFFSET)    | \
                             TIME_SEC)
/* Date: mm/dd/yy :08/10/2020 */
#define DATE_MONTH          (RTC_AUGUST)
#define DATE_DAY            (0x10)
#define DATE_YEAR           (0x2020u)
#define MONTH_OFFSET        (24u)
#define DAY_OFFSET          (16u)
#define DATE_MONTH_DAY_YEAR ((uint32)(DATE_MONTH << MONTH_OFFSET)   | \
                            (uint32)(DATE_DAY << DAY_OFFSET)        | \
                             DATE_YEAR)

/* Alarm Time: 15:44:00 */
#define ALARM_HOUR                  (0x04u)
#define ALARM_MIN                   (0x01u)
#define ALARM_SEC                   (0x30u)
#define ALARM_TIME_HR_MIN_SEC       ((uint32)(ALARM_HOUR << HOUR_OFFSET) | \
                                    (uint32)(ALARM_MIN << MIN_OFFSET)    | \
                                     ALARM_SEC)

/* Alarm Date: 12/18/2014 */
#define ALARM_DATE_MONTH_DAY_YEAR   (DATE_MONTH_DAY_YEAR)

#define TICK_EACH_1_HZ      (1u)
#define TICK_EACH_2_HZ      (2u)
#define TICK_EACH_10_HZ     (10u)

/* Alarm structure declaration */
RTC_DATE_TIME alarmTimeDate;

/* Alarm flag initialization */
uint32 alarmFlag = 0;

/* Interrupt prototypes */
CY_ISR_PROTO(EnableRtcOperation);
CY_ISR_PROTO(UpdateTimeIsrHandler);
CY_ISR_PROTO(AlarmIsrHandler);

CY_ISR_PROTO(Time1_ISR_Handler);


uint32 ui100mS=0;
uint8   byUpdateTime=0;

uint32  Timer1Count;
uint8   byUpdateCapture=0;


#define _TEST_TIMER_    // if test timer mode,Low power is sleep mode

//#define _CAPTURE_MODE_  //Timer1 must configed as Capture mode,and select Interrupt on Compare/capture.
                          // Timer1 capture trigger input select falling edge   
/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  The main() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    char timeBuffer[16u];
    char dateBuffer[16u];
    
    #ifdef _TEST_TIMER_
    char TimerCountBuffer[16u]; 
    uint32 time;
    uint32 date;
    uint32 intmask;
    uint32 intSource;
    #endif
   
    /* Enable WCO */
    CySysClkWcoStart();
    
    /* Enable global interrupts */
    CyGlobalIntEnable;

    /* Alarm structure initialization */
    alarmTimeDate.time = ALARM_TIME_HR_MIN_SEC;
    alarmTimeDate.date = ALARM_DATE_MONTH_DAY_YEAR;
    
    /* Prepare COUNTER0 to use it by CySysTimerDelay function in
     * "INTERRUPT" mode: disable "clear on match" functionality, configure
     * COUNTER0 to generate interrupts on match.
     */
    CySysWdtSetClearOnMatch(CY_SYS_WDT_COUNTER0, 0u);
    CySysWdtSetMode(CY_SYS_WDT_COUNTER0, CY_SYS_WDT_MODE_INT);
    
    /* Enable WDT COUNTER0 */
    CySysWdtEnable(CY_SYS_WDT_COUNTER0_MASK);
    
    /* Disable servicing interrupts from WDT_COUNTER0 to prevent
       trigger callback before the CySysTimerDelay() function. */
    CySysWdtDisableCounterIsr(CY_SYS_WDT_COUNTER0);
    
    /* Register EnableRtcOperation() by the COUNTER0. */
    CySysWdtSetInterruptCallback(CY_SYS_WDT_COUNTER0, EnableRtcOperation);
    
    /* Initiate run the EnableRtcOperation() callback in WCO_STARTUP_DELAY_CYCLES interval. */
    CySysTimerDelay(CY_SYS_WDT_COUNTER0, CY_SYS_TIMER_INTERRUPT, WCO_STARTUP_DELAY_CYCLES);
    
    /* Start RTC component */
    RTC_Start();
    
    /* Set Date and Time */
    RTC_SetDateAndTime(TIME_HR_MIN_SEC,DATE_MONTH_DAY_YEAR);

    /* Ignore second mask to call alarm */
    RTC_SetAlarmMask((uint32)~RTC_ALARM_SEC_MASK);
    
    /* Set Alarm Date and Time */
    RTC_SetAlarmDateAndTime(&alarmTimeDate);

    /* Set RTC time update period */
    //RTC_SetPeriod(1u, TICK_EACH_1_HZ);
    //RTC_SetPeriod(1u,TICK_EACH_2_HZ);
    RTC_SetPeriod(1u,TICK_EACH_10_HZ);
    /* Set function AlarmIsrHandler to be called when alarm triggers */
    RTC_SetAlarmHandler(AlarmIsrHandler);
    
    #ifdef _TEST_TIMER_
    isrTimer1_StartEx(Time1_ISR_Handler);
    Timer1_Start();
    #endif
    
    //###########################################
    //intmask=Timer1_GetInterruptSourceMasked();
    //intSource=Timer1_GetInterruptSource();
    
    //if(intmask==Timer1_INTR_MASK_TC ||intSource==Timer1_INTR_MASK_TC)
    //{
    //    CyDelay(100);    
    //}
    //if(intmask==Timer1_INTR_MASK_CC_MATCH || intSource==Timer1_INTR_MASK_CC_MATCH)
    //{
    //    CyDelay(100);    
    //}
    //##############################################
    while(1)// #1 while(1)
    {
        if(byUpdateTime)
        {
            byUpdateTime=0;
            /* Get Date and Time from RTC */
            time = RTC_GetTime();
            date = RTC_GetDate();
            /* Print Date and Time to UART */
            sprintf(timeBuffer, "%02lu:%02lu:%02lu.%1lu", RTC_GetHours(time), RTC_GetMinutes(time), RTC_GetSecond(time),ui100mS);
            sprintf(dateBuffer, "%02lu/%02lu/%02lu", RTC_GetMonth(date), RTC_GetDay(date), RTC_GetYear(date));

            UART_PutString(timeBuffer);
            UART_PutString(" | ");
            UART_PutString(dateBuffer);
            UART_PutString(" | ");

            if (alarmFlag == 1u)
            {
                UART_PutString("  Alarm ");
                alarmFlag  = 0u;
            }
            else
            {
                UART_PutString("No alarm");
            }

                UART_PutString("\r");
        }
        
        #ifdef _TEST_TIMER_
            #ifdef _CAPTURE_MODE_
            if(byUpdateCapture)
            {
                byUpdateCapture=0;
                sprintf(TimerCountBuffer, "%5lu",Timer1Count);
                UART_PutString("Timer count= ");
                UART_PutString(TimerCountBuffer);
                UART_PutString("\r");
            }
            #endif
        #endif
        
        #ifndef _TEST_TIMER_ // timer can not wakeup CPU from deepsleep
            CySysPmDeepSleep();  // Switch to Deepsleep Mode         
        #endif
        
        #ifdef _TEST_TIMER_
            CySysPmSleep();   // Switch to Sleep Mode       
        #endif    
    }// Loop of #1 while(1)
}


/*******************************************************************************
* Function Name: UpdateTimeIsrHandler
********************************************************************************
* Summary: 
*  This interrupt handler is intended to switch LFCLK source from ILO to WCO and
*  enable RTC operation. 
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void EnableRtcOperation(void)
{
    /* Switch LFCLK source from ILO to WCO. */
    CySysClkSetLfclkSource(CY_SYS_CLK_LFCLK_SRC_WCO);
    
    /* Configure COUNTER0 to generate interrupt every second. */
    CySysWdtDisable(CY_SYS_WDT_COUNTER0_MASK);
    CySysWdtSetClearOnMatch(CY_SYS_WDT_COUNTER0, 1u);
    CySysWdtSetMatch(CY_SYS_WDT_COUNTER0, LFCLK_CYCLES_PER_SECOND);
    CySysWdtEnable(CY_SYS_WDT_COUNTER0_MASK);
    
    /* Eegister UpdateTimeIsrHandler() by the COUNTER0. */
    CySysWdtSetInterruptCallback(CY_SYS_WDT_COUNTER0, UpdateTimeIsrHandler);
    
    /* Enable the COUNTER0 ISR handler. */
    CySysWdtEnableCounterIsr(CY_SYS_WDT_COUNTER0);
    
    /* Configure the LFCLK_Out pin to drive it by LFCLK. */
    LFCLK_Out_SetDriveMode(LFCLK_Out_DM_STRONG);
}


/*******************************************************************************
* Function Name: UpdateTimeIsrHandler
********************************************************************************
* Summary: 
*  The interrupt handler for WDT counter 0 interrupts. Toggles the LED_WdtIsr 
*  pin.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UpdateTimeIsrHandler(void)
{
    /* Toggle pin state */
    ui100mS++;
    if(ui100mS>9)
        ui100mS=0;
    #ifndef _TEST_TIMER_
    LED_WdtIsr_Write((uint8)~(LED_WdtIsr_Read()));
    #endif
    
    RTC_Update();
    byUpdateTime=1;
}


/*******************************************************************************
* Function Name: AlarmIsrHandler
********************************************************************************
* Summary:
*  The interrupt handler for Alarm interrupts. Toggles the LED_WdtInt pin.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void AlarmIsrHandler(void)
{
    alarmFlag = 1u;

    /* Toggle pin state */
    #ifndef _TEST_TIMER_
    LED_Alarm_Write((uint8)~(LED_Alarm_Read()));
    #endif

    /* Clear interrupts state */
    RTC_ClearAlarmStatus();
}

/*******************************************************************************
* Function Name: Time1_ISR_Handle
********************************************************************************
* Summary:
*  The interrupt handler for Alarm interrupts. Toggles the LED_WdtInt pin.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
CY_ISR(Time1_ISR_Handler)
{
    // ******************************************************
    isrTimer1_ClearPending();
    
     // ******************************************************
    
    //######################################################
    //uint32  intSource;
    //intSource=Timer1_GetInterruptSource();// do not use this Function.
    //Timer1_ClearInterrupt(intSource);
    //######################################################
    
    uint32  intmask;
    intmask=Timer1_GetInterruptSourceMasked();// get masked interrupt source which raising this interrupt
   
    Timer1_ClearInterrupt(intmask);
        
    if(intmask==Timer1_INTR_MASK_TC)    //timer counts overflow event
    {
        Timer1Count=Timer1_ReadCounter();
        LED_Alarm_Write((uint8)~(LED_Alarm_Read()));//Red LED
       
    }
    if(intmask==Timer1_INTR_MASK_CC_MATCH) // timer counts compare match event
    {
        Timer1Count=Timer1_ReadCounter();
       
        LED_WdtIsr_Write((uint8)~(LED_WdtIsr_Read()));//Blue LED
        
        #ifdef _CAPTURE_MODE_
        byUpdateCapture=1;
        #endif
    }
  
}   


/* [] END OF FILE */

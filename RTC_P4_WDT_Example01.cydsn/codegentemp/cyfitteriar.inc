;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* UART */
UART_tx__0__DR EQU CYREG_GPIO_PRT3_DR
UART_tx__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
UART_tx__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
UART_tx__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
UART_tx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
UART_tx__0__HSIOM_MASK EQU 0x00F00000
UART_tx__0__HSIOM_SHIFT EQU 20
UART_tx__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
UART_tx__0__INTR EQU CYREG_GPIO_PRT3_INTR
UART_tx__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
UART_tx__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
UART_tx__0__MASK EQU 0x20
UART_tx__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
UART_tx__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
UART_tx__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
UART_tx__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
UART_tx__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
UART_tx__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
UART_tx__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
UART_tx__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
UART_tx__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
UART_tx__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
UART_tx__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
UART_tx__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
UART_tx__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
UART_tx__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
UART_tx__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
UART_tx__0__PC EQU CYREG_GPIO_PRT3_PC
UART_tx__0__PC2 EQU CYREG_GPIO_PRT3_PC2
UART_tx__0__PORT EQU 3
UART_tx__0__PS EQU CYREG_GPIO_PRT3_PS
UART_tx__0__SHIFT EQU 5
UART_tx__DR EQU CYREG_GPIO_PRT3_DR
UART_tx__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
UART_tx__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
UART_tx__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
UART_tx__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
UART_tx__INTR EQU CYREG_GPIO_PRT3_INTR
UART_tx__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
UART_tx__INTSTAT EQU CYREG_GPIO_PRT3_INTR
UART_tx__MASK EQU 0x20
UART_tx__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
UART_tx__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
UART_tx__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
UART_tx__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
UART_tx__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
UART_tx__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
UART_tx__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
UART_tx__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
UART_tx__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
UART_tx__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
UART_tx__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
UART_tx__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
UART_tx__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
UART_tx__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
UART_tx__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
UART_tx__PC EQU CYREG_GPIO_PRT3_PC
UART_tx__PC2 EQU CYREG_GPIO_PRT3_PC2
UART_tx__PORT EQU 3
UART_tx__PS EQU CYREG_GPIO_PRT3_PS
UART_tx__SHIFT EQU 5

/* Pin_1 */
Pin_1__0__DR EQU CYREG_GPIO_PRT1_DR
Pin_1__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Pin_1__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Pin_1__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Pin_1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Pin_1__0__HSIOM_MASK EQU 0x0000000F
Pin_1__0__HSIOM_SHIFT EQU 0
Pin_1__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Pin_1__0__INTR EQU CYREG_GPIO_PRT1_INTR
Pin_1__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Pin_1__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Pin_1__0__MASK EQU 0x01
Pin_1__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Pin_1__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Pin_1__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Pin_1__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Pin_1__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Pin_1__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Pin_1__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Pin_1__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Pin_1__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Pin_1__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Pin_1__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Pin_1__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Pin_1__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Pin_1__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Pin_1__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Pin_1__0__PC EQU CYREG_GPIO_PRT1_PC
Pin_1__0__PC2 EQU CYREG_GPIO_PRT1_PC2
Pin_1__0__PORT EQU 1
Pin_1__0__PS EQU CYREG_GPIO_PRT1_PS
Pin_1__0__SHIFT EQU 0
Pin_1__DR EQU CYREG_GPIO_PRT1_DR
Pin_1__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Pin_1__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Pin_1__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Pin_1__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Pin_1__INTR EQU CYREG_GPIO_PRT1_INTR
Pin_1__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Pin_1__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Pin_1__MASK EQU 0x01
Pin_1__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Pin_1__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Pin_1__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Pin_1__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Pin_1__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Pin_1__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Pin_1__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Pin_1__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Pin_1__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Pin_1__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Pin_1__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Pin_1__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Pin_1__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Pin_1__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Pin_1__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Pin_1__PC EQU CYREG_GPIO_PRT1_PC
Pin_1__PC2 EQU CYREG_GPIO_PRT1_PC2
Pin_1__PORT EQU 1
Pin_1__PS EQU CYREG_GPIO_PRT1_PS
Pin_1__SHIFT EQU 0

/* Timer1 */
Timer1_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT0_CC
Timer1_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT0_CC_BUFF
Timer1_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT0_COUNTER
Timer1_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT0_CTRL
Timer1_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT0_INTR
Timer1_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT0_INTR_MASK
Timer1_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT0_INTR_MASKED
Timer1_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT0_INTR_SET
Timer1_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT0_PERIOD
Timer1_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT0_PERIOD_BUFF
Timer1_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT0_STATUS
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x01
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 0
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x100
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 8
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x1000000
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 24
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x10000
Timer1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 16
Timer1_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
Timer1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x01
Timer1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 0
Timer1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
Timer1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x01
Timer1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 0
Timer1_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 0
Timer1_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT0_TR_CTRL0
Timer1_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT0_TR_CTRL1
Timer1_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT0_TR_CTRL2

/* Clock_2 */
Clock_2__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL7
Clock_2__DIV_ID EQU 0x00000040
Clock_2__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
Clock_2__PA_DIV_ID EQU 0x000000FF

/* LED_Alarm */
LED_Alarm__0__DR EQU CYREG_GPIO_PRT3_DR
LED_Alarm__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Alarm__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Alarm__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Alarm__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
LED_Alarm__0__HSIOM_MASK EQU 0x0F000000
LED_Alarm__0__HSIOM_SHIFT EQU 24
LED_Alarm__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Alarm__0__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Alarm__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Alarm__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Alarm__0__MASK EQU 0x40
LED_Alarm__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Alarm__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Alarm__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Alarm__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Alarm__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Alarm__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Alarm__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Alarm__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Alarm__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Alarm__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Alarm__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Alarm__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Alarm__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Alarm__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Alarm__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Alarm__0__PC EQU CYREG_GPIO_PRT3_PC
LED_Alarm__0__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Alarm__0__PORT EQU 3
LED_Alarm__0__PS EQU CYREG_GPIO_PRT3_PS
LED_Alarm__0__SHIFT EQU 6
LED_Alarm__DR EQU CYREG_GPIO_PRT3_DR
LED_Alarm__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Alarm__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Alarm__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Alarm__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Alarm__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Alarm__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Alarm__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Alarm__MASK EQU 0x40
LED_Alarm__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Alarm__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Alarm__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Alarm__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Alarm__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Alarm__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Alarm__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Alarm__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Alarm__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Alarm__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Alarm__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Alarm__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Alarm__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Alarm__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Alarm__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Alarm__PC EQU CYREG_GPIO_PRT3_PC
LED_Alarm__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Alarm__PORT EQU 3
LED_Alarm__PS EQU CYREG_GPIO_PRT3_PS
LED_Alarm__SHIFT EQU 6

/* LFCLK_Out */
LFCLK_Out__0__DR EQU CYREG_GPIO_PRT0_DR
LFCLK_Out__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
LFCLK_Out__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
LFCLK_Out__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
LFCLK_Out__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LFCLK_Out__0__HSIOM_MASK EQU 0x000F0000
LFCLK_Out__0__HSIOM_SHIFT EQU 16
LFCLK_Out__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
LFCLK_Out__0__INTR EQU CYREG_GPIO_PRT0_INTR
LFCLK_Out__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
LFCLK_Out__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
LFCLK_Out__0__MASK EQU 0x10
LFCLK_Out__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
LFCLK_Out__0__OUT_SEL_SHIFT EQU 8
LFCLK_Out__0__OUT_SEL_VAL EQU 2
LFCLK_Out__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LFCLK_Out__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LFCLK_Out__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LFCLK_Out__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LFCLK_Out__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LFCLK_Out__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LFCLK_Out__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LFCLK_Out__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LFCLK_Out__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LFCLK_Out__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LFCLK_Out__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LFCLK_Out__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LFCLK_Out__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LFCLK_Out__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LFCLK_Out__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LFCLK_Out__0__PC EQU CYREG_GPIO_PRT0_PC
LFCLK_Out__0__PC2 EQU CYREG_GPIO_PRT0_PC2
LFCLK_Out__0__PORT EQU 0
LFCLK_Out__0__PS EQU CYREG_GPIO_PRT0_PS
LFCLK_Out__0__SHIFT EQU 4
LFCLK_Out__DR EQU CYREG_GPIO_PRT0_DR
LFCLK_Out__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
LFCLK_Out__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
LFCLK_Out__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
LFCLK_Out__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
LFCLK_Out__INTR EQU CYREG_GPIO_PRT0_INTR
LFCLK_Out__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
LFCLK_Out__INTSTAT EQU CYREG_GPIO_PRT0_INTR
LFCLK_Out__MASK EQU 0x10
LFCLK_Out__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LFCLK_Out__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LFCLK_Out__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LFCLK_Out__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LFCLK_Out__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LFCLK_Out__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LFCLK_Out__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LFCLK_Out__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LFCLK_Out__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LFCLK_Out__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LFCLK_Out__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LFCLK_Out__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LFCLK_Out__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LFCLK_Out__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LFCLK_Out__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LFCLK_Out__PC EQU CYREG_GPIO_PRT0_PC
LFCLK_Out__PC2 EQU CYREG_GPIO_PRT0_PC2
LFCLK_Out__PORT EQU 0
LFCLK_Out__PS EQU CYREG_GPIO_PRT0_PS
LFCLK_Out__SHIFT EQU 4

/* isrTimer1 */
isrTimer1__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isrTimer1__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isrTimer1__INTC_MASK EQU 0x20000
isrTimer1__INTC_NUMBER EQU 17
isrTimer1__INTC_PRIOR_MASK EQU 0xC000
isrTimer1__INTC_PRIOR_NUM EQU 3
isrTimer1__INTC_PRIOR_REG EQU CYREG_CM0_IPR4
isrTimer1__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isrTimer1__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* LED_WdtIsr */
LED_WdtIsr__0__DR EQU CYREG_GPIO_PRT3_DR
LED_WdtIsr__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_WdtIsr__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_WdtIsr__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_WdtIsr__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
LED_WdtIsr__0__HSIOM_MASK EQU 0xF0000000
LED_WdtIsr__0__HSIOM_SHIFT EQU 28
LED_WdtIsr__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_WdtIsr__0__INTR EQU CYREG_GPIO_PRT3_INTR
LED_WdtIsr__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_WdtIsr__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_WdtIsr__0__MASK EQU 0x80
LED_WdtIsr__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_WdtIsr__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_WdtIsr__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_WdtIsr__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_WdtIsr__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_WdtIsr__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_WdtIsr__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_WdtIsr__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_WdtIsr__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_WdtIsr__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_WdtIsr__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_WdtIsr__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_WdtIsr__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_WdtIsr__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_WdtIsr__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_WdtIsr__0__PC EQU CYREG_GPIO_PRT3_PC
LED_WdtIsr__0__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_WdtIsr__0__PORT EQU 3
LED_WdtIsr__0__PS EQU CYREG_GPIO_PRT3_PS
LED_WdtIsr__0__SHIFT EQU 7
LED_WdtIsr__DR EQU CYREG_GPIO_PRT3_DR
LED_WdtIsr__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_WdtIsr__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_WdtIsr__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_WdtIsr__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_WdtIsr__INTR EQU CYREG_GPIO_PRT3_INTR
LED_WdtIsr__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_WdtIsr__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_WdtIsr__MASK EQU 0x80
LED_WdtIsr__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_WdtIsr__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_WdtIsr__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_WdtIsr__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_WdtIsr__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_WdtIsr__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_WdtIsr__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_WdtIsr__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_WdtIsr__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_WdtIsr__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_WdtIsr__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_WdtIsr__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_WdtIsr__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_WdtIsr__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_WdtIsr__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_WdtIsr__PC EQU CYREG_GPIO_PRT3_PC
LED_WdtIsr__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_WdtIsr__PORT EQU 3
LED_WdtIsr__PS EQU CYREG_GPIO_PRT3_PS
LED_WdtIsr__SHIFT EQU 7

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x1A6E11AA
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4F
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 10
CYDEV_DFT_SELECT_CLK1 EQU 11
CYDEV_DMA_CHANNELS_AVAILABLE EQU 8
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_INTR_NUMBER_DMA EQU 21
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDD_MV EQU 3300
CYDEV_VDDR_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8bless_VERSION EQU 2
CYIPBLOCK_m0s8cpussv2_VERSION EQU 1
CYIPBLOCK_m0s8csd_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8udbif_VERSION EQU 1
CYIPBLOCK_s8pass4al_VERSION EQU 1
DMA_CHANNELS_USED__MASK EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */

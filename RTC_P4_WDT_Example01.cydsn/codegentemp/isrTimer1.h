/*******************************************************************************
* File Name: isrTimer1.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_isrTimer1_H)
#define CY_ISR_isrTimer1_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isrTimer1_Start(void);
void isrTimer1_StartEx(cyisraddress address);
void isrTimer1_Stop(void);

CY_ISR_PROTO(isrTimer1_Interrupt);

void isrTimer1_SetVector(cyisraddress address);
cyisraddress isrTimer1_GetVector(void);

void isrTimer1_SetPriority(uint8 priority);
uint8 isrTimer1_GetPriority(void);

void isrTimer1_Enable(void);
uint8 isrTimer1_GetState(void);
void isrTimer1_Disable(void);

void isrTimer1_SetPending(void);
void isrTimer1_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isrTimer1 ISR. */
#define isrTimer1_INTC_VECTOR            ((reg32 *) isrTimer1__INTC_VECT)

/* Address of the isrTimer1 ISR priority. */
#define isrTimer1_INTC_PRIOR             ((reg32 *) isrTimer1__INTC_PRIOR_REG)

/* Priority of the isrTimer1 interrupt. */
#define isrTimer1_INTC_PRIOR_NUMBER      isrTimer1__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isrTimer1 interrupt. */
#define isrTimer1_INTC_SET_EN            ((reg32 *) isrTimer1__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isrTimer1 interrupt. */
#define isrTimer1_INTC_CLR_EN            ((reg32 *) isrTimer1__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isrTimer1 interrupt state to pending. */
#define isrTimer1_INTC_SET_PD            ((reg32 *) isrTimer1__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isrTimer1 interrupt. */
#define isrTimer1_INTC_CLR_PD            ((reg32 *) isrTimer1__INTC_CLR_PD_REG)



#endif /* CY_ISR_isrTimer1_H */


/* [] END OF FILE */

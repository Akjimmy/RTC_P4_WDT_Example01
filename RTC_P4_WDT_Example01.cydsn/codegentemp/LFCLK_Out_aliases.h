/*******************************************************************************
* File Name: LFCLK_Out.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LFCLK_Out_ALIASES_H) /* Pins LFCLK_Out_ALIASES_H */
#define CY_PINS_LFCLK_Out_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define LFCLK_Out_0			(LFCLK_Out__0__PC)
#define LFCLK_Out_0_PS		(LFCLK_Out__0__PS)
#define LFCLK_Out_0_PC		(LFCLK_Out__0__PC)
#define LFCLK_Out_0_DR		(LFCLK_Out__0__DR)
#define LFCLK_Out_0_SHIFT	(LFCLK_Out__0__SHIFT)
#define LFCLK_Out_0_INTR	((uint16)((uint16)0x0003u << (LFCLK_Out__0__SHIFT*2u)))

#define LFCLK_Out_INTR_ALL	 ((uint16)(LFCLK_Out_0_INTR))


#endif /* End Pins LFCLK_Out_ALIASES_H */


/* [] END OF FILE */

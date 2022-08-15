/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtr_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef SYSCTR_CFG_H
#define SYSCTR_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Mc_Hw_Reg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define _MAIN_OSCILLATOR_DISABLE 0
/*
*Describtion : Enable/Disable the main oscillator
*Options :
         0   Enable  Main Oscillator
         1   Disable Main Oscillator
**************************************/

#define _OCSILLLATOR_SOURCE 2
/*
*Describtion : Selects the input source for the OSC
*Options :
         1   Main oscillator
         2   Precision internal oscillator (default/else)
         3   Precision internal oscillator ( / 4 )
         4   Low-frequency internal oscillator
**************************************/

#define _PLL_POWER_DOWN 1
/*
*Describtion : Enable the PLL
*Options :
         0   The PLL is operating normally.
         1   The PLL is powered down.(default/else)
**************************************/

#define _GPIO_PORT_A_CLOCK_ENABLE 1
#define _GPIO_PORT_B_CLOCK_ENABLE 0
#define _GPIO_PORT_C_CLOCK_ENABLE 0
#define _GPIO_PORT_D_CLOCK_ENABLE 0
#define _GPIO_PORT_E_CLOCK_ENABLE 0
#define _GPIO_PORT_F_CLOCK_ENABLE 1
/*
*Describtion : Control the clock access to GPIO Ports
*Options :
         0   Enable Clock gatting
         1   Disable Clock gatting
**************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Main_OSC_Disable(void);
void OSC_Source(void);
void PLL_Activation(void);
void GPIO_Clock_Gating_Control(void);
void GPIO_Digital_Enable(void);
#endif /* SYSCTR_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE:  SysCtr_Cfg.h
 *********************************************************************************************************************/

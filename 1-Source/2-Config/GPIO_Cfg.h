/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef GPIO_CFG_H
#define GPIO_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Mc_Hw_Reg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define _GPIO_PORT_A_BUS 0
#define _GPIO_PORT_B_BUS 0
#define _GPIO_PORT_C_BUS 0
#define _GPIO_PORT_D_BUS 0
#define _GPIO_PORT_E_BUS 0
#define _GPIO_PORT_F_BUS 0
/*
*Describtion : Control the the bus of GPIO ports
*Options :
         0   Advanced Peripheral Bus (APB)
         1   Advanced High-Performance Bus (AHB)
**************************************/

#define _GPIO_PORT_A_UNLOCK 1
#define _GPIO_PORT_B_UNLOCK 0
#define _GPIO_PORT_C_UNLOCK 1
#define _GPIO_PORT_D_UNLOCK 1
#define _GPIO_PORT_E_UNLOCK 0
#define _GPIO_PORT_F_UNLOCK 0
/*
*Describtion : Enables GPIO Ports
*Options :
         0   The GPIOCR register is locked and may not be modified.
         1   The GPIOCR register is unlocked and may be modified.
**************************************/

#define _GIPO_PORT_A_DIGITAL_ENABLE   1
#define _GIPO_PORT_B_DIGITAL_ENABLE   0
#define _GIPO_PORT_C_DIGITAL_ENABLE   1
#define _GIPO_PORT_D_DIGITAL_ENABLE   1
#define _GIPO_PORT_E_DIGITAL_ENABLE   1
#define _GIPO_PORT_F_DIGITAL_ENABLE   1
/*
*Describtion : configures the GPIO ports as digital 
*Options :
         0   The digital functions for the corresponding PORT are disabled
         1   The digital functions for the corresponding PORT are enabled
**************************************/

#define _GIPO_PORT_A_DIGITAL_DIRECTION   1
#define _GIPO_PORT_B_DIGITAL_DIRECTION   1
#define _GIPO_PORT_C_DIGITAL_DIRECTION   1
#define _GIPO_PORT_D_DIGITAL_DIRECTION   1
#define _GIPO_PORT_E_DIGITAL_DIRECTION   1
#define _GIPO_PORT_F_DIGITAL_DIRECTION   1
/*
*Describtion : configures the dirction of GPIO ports (Input/Output)  
*Options :
         0   Input direction
         1   Output direction
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
void GPIO_Unlock(void);
void GPIO_Digital_Enable(void);
void GPIO_Direction_Control(void);
#endif /* GPIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE:  GPIO_Cfg.h
 *********************************************************************************************************************/

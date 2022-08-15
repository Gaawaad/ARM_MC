/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "GPIO_Cfg.h"

/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
 * \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)
 * \Description     : Describe this service
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : parameterName   Parameter Describtion
 * \Parameters (out): None
 * \Return value:   : Std_ReturnType  E_OK
 *                                    E_NOT_OK
 *******************************************************************************/
void GPIO_Unlock(void)
{

#if (_GPIO_PORT_A_UNLOCK == 1)
    GPIOLOCK_A_Reg = 0x0;
    GPIOCR_A_Reg = 0xFF;

#else
    GPIOCR_A_Reg = 0x00;
    GPIOLOCK_A_Reg = 0x1;
#endif

#if (_GPIO_PORT_B_UNLOCK == 1)
    GPIOLOCK_B_Reg = 0x0;
    GPIOCR_B_Reg = 0xFF;
#else
    GPIOCR_B_Reg = 0x00;
    GPIOLOCK_B_Reg = 0x1;
#endif

#if (_GPIO_PORT_C_UNLOCK == 1)
    GPIOLOCK_C_Reg = 0x0;
    GPIOCR_C_Reg = 0xFF;
#else
    GPIOCR_C_Reg = 0x00;
    GPIOLOCK_C_Reg = 0x1;
#endif

#if (_GPIO_PORT_D_UNLOCK == 1)
    GPIOLOCK_D_Reg = 0x0;
    GPIOCR_D_Reg = 0xFF;
#else
    GPIOCR_D_Reg = 0x00;
    GPIOLOCK_D_Reg = 0x1;
#endif

#if (_GPIO_PORT_E_UNLOCK == 1)
    GPIOLOCK_E_Reg = 0x0;
    GPIOCR_E_Reg = 0xFF;
#else
    GPIOCR_E_Reg = 0x00;
    GPIOLOCK_E_Reg = 0x1;
#endif

#if (_GPIO_PORT_F_UNLOCK == 1)
    GPIOLOCK_F_Reg = 0x0;
    GPIOCR_F_Reg = 0xFF;
#else
    GPIOCR_F_Reg = 0x00;
    GPIOLOCK_F_Reg = 0x1;
#endif
}

void GPIO_Digital_Enable(void)
{

#if (_GIPO_PORT_A_DIGITAL_ENABLE == 1)
    GPIODEN_A_Reg = 0xFF;
#else
    GPIODEN_A_Reg = 0x00;
#endif

#if (_GIPO_PORT_B_DIGITAL_ENABLE == 1)
    GPIODEN_B_Reg = 0xFF;
#else
    GPIODEN_B_Reg = 0x00;
#endif

#if (_GIPO_PORT_C_DIGITAL_ENABLE == 1)
    GPIODEN_C_Reg = 0xFF;
#else
    GPIODEN_C_Reg = 0x00;
#endif

#if (_GIPO_PORT_D_DIGITAL_ENABLE == 1)
    GPIODEN_D_Reg = 0xFF;
#else
    GPIODEN_D_Reg = 0x00;
#endif

#if (_GIPO_PORT_E_DIGITAL_ENABLE == 1)
    GPIODEN_E_Reg = 0xFF;
#else
    GPIODEN_E_Reg = 0x00;
#endif

#if (_GIPO_PORT_F_DIGITAL_ENABLE == 1)
    GPIODEN_F_Reg = 0xFF;
#else
    GPIODEN_F_Reg = 0x00;
#endif
}

void GPIO_Direction_Control(void){
#if(_GIPO_PORT_A_DIGITAL_DIRECTION==1)
GPIODIR_A_Reg=0xFF;
#else
GPIODIR_A_Reg=0x00;
#endif

#if(_GIPO_PORT_B_DIGITAL_DIRECTION==1)
GPIODIR_B_Reg=0xFF;
#else
GPIODIR_B_Reg=0x00;
#endif

#if(_GIPO_PORT_C_DIGITAL_DIRECTION==1)
GPIODIR_C_Reg=0xFF;
#else
GPIODIR_C_Reg=0x00;
#endif

#if(_GIPO_PORT_D_DIGITAL_DIRECTION==1)
GPIODIR_D_Reg=0xFF;
#else
GPIODIR_D_Reg=0x00;
#endif

#if(_GIPO_PORT_E_DIGITAL_DIRECTION==1)
GPIODIR_E_Reg=0xFF;
#else
GPIODIR_E_Reg=0x00;
#endif

#if(_GIPO_PORT_F_DIGITAL_DIRECTION==1)
GPIODIR_F_Reg=0xFF;
#else
GPIODIR_F_Reg=0x00;
#endif
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/

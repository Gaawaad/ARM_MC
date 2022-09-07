/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Button.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Button.h"
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

u8 GPIOInterruptNum_Arr[] = {_INT0, _INT1, _INT2, _INT3, _INT4, _INT30};
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
void Button_Init(void)
{
    intCtr_init();
    Dio_ConfigChannel(TIME_ON_UP_BUTTON_PORT, TIME_ON_UP_BUTTON_PIN, INPUT);
    Dio_ConfigChannel(TIME_ON_DOWNN_BUTTON_PORT, TIME_ON_DOWNN_BUTTON_PIN, INPUT);
    Dio_ConfigChannel(TIME_OFF_UP_BUTTON_PORT, TIME_OFF_UP_BUTTON_PIN, INPUT);
    Dio_ConfigChannel(TIME_OFF_DOWNN_BUTTON_PORT, TIME_OFF_DOWNN_BUTTON_PIN, INPUT);

    GPIOInterruptEvent(TIME_ON_UP_BUTTON_PORT, TIME_ON_UP_BUTTON_PIN, _RISING_EDGE);
    GPIOInterruptEvent(TIME_ON_DOWNN_BUTTON_PORT, TIME_ON_DOWNN_BUTTON_PIN, _RISING_EDGE);
    GPIOInterruptEvent(TIME_OFF_UP_BUTTON_PORT, TIME_OFF_UP_BUTTON_PIN, _RISING_EDGE);
    GPIOInterruptEvent(TIME_OFF_DOWNN_BUTTON_PORT, TIME_OFF_DOWNN_BUTTON_PIN, _RISING_EDGE);

    IntEnable(GPIOInterruptNum_Arr[TIME_ON_UP_BUTTON_PORT]);
    IntEnable(GPIOInterruptNum_Arr[TIME_ON_DOWNN_BUTTON_PORT]);
    IntEnable(GPIOInterruptNum_Arr[TIME_OFF_UP_BUTTON_PORT]);
    IntEnable(GPIOInterruptNum_Arr[TIME_OFF_DOWNN_BUTTON_PORT]);
}

/**********************************************************************************************************************
 *  END OF FILE: Button.c
 *********************************************************************************************************************/

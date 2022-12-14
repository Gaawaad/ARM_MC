/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  WDT.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WDT.h"

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
void WDT_Init(void)
{

#if (_WDT_LOAD_VALUE > (4294967295) && _WDT_LOAD_VALUE >= (0))
    WDTLOAD_Reg = 10000;
#else
    WDTLOAD_Reg = _WDT_LOAD_VALUE;
#endif
    
#if (_WDT_INTERRUPT_TYPE == 0)
    WDTCTL_Reg &= ~(1 << 2);
#elif (_WDT_INTERRUPT_TYPE == 1)
    WDTCTL_Reg |= (1 << 2);
#else
    WDTCTL_Reg &= ~(1 << 2);
#endif

#if (_WDT_RESET_ENABLE == 0)
    WDTCTL_Reg &= ~(1 << 1);
#elif (_WDT_RESET_ENABLE == 1)
    WDTCTL_Reg |= (1 << 1);
#else
    WDTCTL_Reg &= ~(1 << 1);
#endif
   
#if (_WDT_INTERRUPT_ENABLE == 0)
    WDTCTL_Reg &= ~(1 << 0);
#elif (_WDT_INTERRUPT_ENABLE == 1)
    WDTCTL_Reg |= (1 << 0);
#else
    WDTCTL_Reg &= ~(1 << 0);
#endif
}
static void Write_Complete_Pulling(void)
{
    while (((WDTCTL_Reg >> 31) & 0x1))
    {
        /*waitting.....*/
    }
}
/**********************************************************************************************************************
 *  END OF FILE: WDT.c
 *********************************************************************************************************************/

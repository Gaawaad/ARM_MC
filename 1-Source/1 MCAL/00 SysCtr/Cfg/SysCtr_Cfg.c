/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  SysCtr_Cfg.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "SysCtr_Cfg.h"

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
void Main_OSC_Disable(void)
{
#if (_MAIN_OSCILLATOR_DISABLE == 1)
    RCC_Reg |= (1 << 0);
#else
    RCC_Reg |= (0 << 0);
#endif
}

void OSC_Source(void)
{
#if (_OCSILLLATOR_SOURCE == 1)
    RCC_Reg |= (RCC_Reg & 0xFFFFFF0F) | (0x00);
#elif (_OCSILLLATOR_SOURCE == 2)
    RCC_Reg |= (RCC_Reg & 0xFFFFFF0F) | (0x10);
#elif (_OCSILLLATOR_SOURCE == 3)
    RCC_Reg |= (RCC_Reg & 0xFFFFFF0F) | (0x20);
#elif (_OCSILLLATOR_SOURCE == 4)
    RCC_Reg |= (RCC_Reg & 0xFFFFFF0F) | (0x30);
#else
    RCC_Reg |= (RCC_Reg & 0xFFFFFF0F) | (0x10);
#endif
}

void PLL_Activation(void)
{
#if (_PLL_POWR_DOWN == 1)
    RCC_Reg &= ~(1 << 13);
#else
    RCC_Reg |= (1 << 13);
#endif
}

void Periph_Clock_Gating_Control(void)
{
/*(WDT_Gatting)*********************************/
#if (_WDT_0_CLOCK_ENANLE == 0)
    RCGCWD_Reg &= ~(1 << 0);
#else
    RCGCWD_Reg |= (1 << 0);
#endif

#if (_WDT_1_CLOCK_ENANLE == 0)
    RCGCWD_Reg &= ~(1 << 1);
#else
    RCGCWD_Reg |= (1 << 1);
#endif
/*(GPT_Gatting)**********************************/
#if (_TIMER_0_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 0);
#else
    RCGCTIMER_Reg |= (1 << 0);
#endif

#if (_TIMER_1_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 1);
#else
    RCGCTIMER_Reg |= (1 << 1);
#endif

#if (_TIMER_2_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 2);
#else
    RCGCTIMER_Reg |= (1 << 2);
#endif

#if (_TIMER_3_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 3);
#else
    RCGCTIMER_Reg |= (1 << 3);
#endif

#if (_TIMER_4_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 4);
#else
    RCGCTIMER_Reg |= (1 << 4);
#endif

#if (_TIMER_5_A_CLOCK_ENANLE == 0)
    RCGCTIMER_Reg &= ~(1 << 5);
#else
    RCGCTIMER_Reg |= (1 << 5);
#endif

/*(GPIO_Gatting)*********************************/
#if (_GPIO_PORT_A_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 0);
#else
    RCGCGPIO_Reg &= ~(1 << 0);
#endif

#if (_GPIO_PORT_B_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 1);
#else
    RCGCGPIO_Reg &= ~(1 << 1);
#endif

#if (_GPIO_PORT_C_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 2);
#else
    RCGCGPIO_Reg &= ~(1 << 2);
#endif

#if (_GPIO_PORT_D_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 3);
#else
    RCGCGPIO_Reg &= ~(1 << 3);
#endif

#if (_GPIO_PORT_E_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 4);
#else
    RCGCGPIO_Reg &= ~(1 << 4);
#endif

#if (_GPIO_PORT_F_CLOCK_ENABLE == 1)
    RCGCGPIO_Reg |= (1 << 5);
#else
    RCGCGPIO_Reg &= ~(1 << 5);
#endif
}

/**********************************************************************************************************************
 *  END OF FILE: SysCtr_Cfg.c
 *********************************************************************************************************************/

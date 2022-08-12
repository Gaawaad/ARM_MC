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
#include "IntCtr_Lcfg.h"

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
void intConfig_APINT_init(void)
{

#if (_INT_SET_GROUP_AND_SGROUB_NUMBERS == X_X_X)
    APINT_Reg = 0x05FA0000 | 0x400;
#elif (_INT_SET_GROUP_AND_SGROUB_NUMBERS == X_X_Y)
    APINT_Reg = 0x05FA0000 | 0x500;
#elif (_INT_SET_GROUP_AND_SGROUB_NUMBERS == X_Y_Y)
    APINT_Reg = 0x05FA0000 | 0x600;
#elif (_INT_SET_GROUP_AND_SGROUB_NUMBERS == Y_Y_Y)
    APINT_Reg = 0x05FA0000 | 0x700;
#else
    APINT_Reg = 0x05FA0000 | 0x700;
#endif
}

void intConfig_PRIn_init(void)
{

    PRI0_Reg |= ((_INT0_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT0_SUB_G_PRI << 5);
    PRI0_Reg |= ((_INT1_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT1_SUB_G_PRI << 13);
    PRI0_Reg |= ((_INT2_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT2_SUB_G_PRI << 21);
    PRI0_Reg |= ((_INT3_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT3_SUB_G_PRI << 29);

    PRI1_Reg |= ((_INT4_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT4_SUB_G_PRI << 5);
    PRI1_Reg |= ((_INT5_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT5_SUB_G_PRI << 13);
    PRI1_Reg |= ((_INT6_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT6_SUB_G_PRI << 21);
    PRI1_Reg |= ((_INT7_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT7_SUB_G_PRI << 29);

    PRI2_Reg |= ((_INT8_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT8_SUB_G_PRI << 5);
    PRI2_Reg |= ((_INT9_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT9_SUB_G_PRI << 13);
    PRI2_Reg |= ((_INT10_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT10_SUB_G_PRI << 21);
    PRI2_Reg |= ((_INT11_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT11_SUB_G_PRI << 29);

    PRI3_Reg |= ((_INT12_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT12_SUB_G_PRI << 5);
    PRI3_Reg |= ((_INT13_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT13_SUB_G_PRI << 13);
    PRI3_Reg |= ((_INT14_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT14_SUB_G_PRI << 21);
    PRI3_Reg |= ((_INT15_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT15_SUB_G_PRI << 29);

    PRI4_Reg |= ((_INT16_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT16_SUB_G_PRI << 5);
    PRI4_Reg |= ((_INT17_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT17_SUB_G_PRI << 13);
    PRI4_Reg |= ((_INT18_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT18_SUB_G_PRI << 21);
    PRI4_Reg |= ((_INT19_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT19_SUB_G_PRI << 29);

    PRI5_Reg |= ((_INT20_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT20_SUB_G_PRI << 5);
    PRI5_Reg |= ((_INT21_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT21_SUB_G_PRI << 13);
    PRI5_Reg |= ((_INT22_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT22_SUB_G_PRI << 21);
    PRI5_Reg |= ((_INT23_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT23_SUB_G_PRI << 29);

    PRI6_Reg |= ((_INT24_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT24_SUB_G_PRI << 5);
    PRI6_Reg |= ((_INT25_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT25_SUB_G_PRI << 13);
    PRI6_Reg |= ((_INT26_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT26_SUB_G_PRI << 21);
    PRI6_Reg |= ((_INT27_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT27_SUB_G_PRI << 29);

    PRI7_Reg |= ((_INT28_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT28_SUB_G_PRI << 5);
    PRI7_Reg |= ((_INT29_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT29_SUB_G_PRI << 13);
    PRI7_Reg |= ((_INT30_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT30_SUB_G_PRI << 21);
    PRI7_Reg |= ((_INT31_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT31_SUB_G_PRI << 29);

    PRI8_Reg |= ((_INT32_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT32_SUB_G_PRI << 5);
    PRI8_Reg |= ((_INT33_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT33_SUB_G_PRI << 13);
    PRI8_Reg |= ((_INT34_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT34_SUB_G_PRI << 21);
    PRI8_Reg |= ((_INT35_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT35_SUB_G_PRI << 29);

    PRI9_Reg |= ((_INT36_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT36_SUB_G_PRI << 5);
    PRI9_Reg |= ((_INT37_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT35_SUB_G_PRI << 13);
    PRI9_Reg |= ((_INT38_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT38_SUB_G_PRI << 21);
    PRI9_Reg |= ((_INT39_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT39_SUB_G_PRI << 29);

    PRI10_Reg |= ((_INT40_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT40_SUB_G_PRI << 5);
    PRI10_Reg |= ((_INT41_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT41_SUB_G_PRI << 13);
    PRI10_Reg |= ((_INT42_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT42_SUB_G_PRI << 21);
    PRI10_Reg |= ((_INT43_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT43_SUB_G_PRI << 29);

    PRI11_Reg |= ((_INT44_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT44_SUB_G_PRI << 5);
    PRI11_Reg |= ((_INT45_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT45_SUB_G_PRI << 13);
    PRI11_Reg |= ((_INT46_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT46_SUB_G_PRI << 21);
    PRI11_Reg |= ((_INT47_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT47_SUB_G_PRI << 29);

    PRI12_Reg |= ((_INT48_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT48_SUB_G_PRI << 5);
    PRI12_Reg |= ((_INT49_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT49_SUB_G_PRI << 13);
    PRI12_Reg |= ((_INT50_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT50_SUB_G_PRI << 21);
    PRI12_Reg |= ((_INT51_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT51_SUB_G_PRI << 29);

    PRI13_Reg |= ((_INT52_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT52_SUB_G_PRI << 5);
    PRI13_Reg |= ((_INT53_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT53_SUB_G_PRI << 13);
    PRI13_Reg |= ((_INT54_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT54_SUB_G_PRI << 21);
    PRI13_Reg |= ((_INT55_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT55_SUB_G_PRI << 29);

    PRI14_Reg |= ((_INT56_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT56_SUB_G_PRI << 5);
    PRI14_Reg |= ((_INT57_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT57_SUB_G_PRI << 13);
    PRI14_Reg |= ((_INT58_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT58_SUB_G_PRI << 21);
    PRI14_Reg |= ((_INT59_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT59_SUB_G_PRI << 29);

    PRI15_Reg |= ((_INT58_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (_INT58_SUB_G_PRI << 5);
    PRI15_Reg |= ((_INT59_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (_INT59_SUB_G_PRI << 13);
    PRI15_Reg |= ((_INT60_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (_INT60_SUB_G_PRI << 21);
    PRI15_Reg |= ((_INT61_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (_INT61_SUB_G_PRI << 29);
}

void intConfig_SYSPRIn_init(void)
{

    SYSPRI1_Reg |= ((Memory_Management_Fault_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (Memory_Management_Fault_SUB_G_PRI << 5);
    SYSPRI1_Reg |= ((Bus_Fault_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 13) | (Bus_Fault_SUB_G_PRI << 13);
    SYSPRI1_Reg |= ((Usage_Fault_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (Usage_Fault_SUB_G_PRI << 21);

    SYSPRI2_Reg |= ((SVCall_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (SVCall_SUB_G_PRI << 29);

    SYSPRI3_Reg |= ((Debug_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 5) | (Debug_SUB_G_PRI << 5);
    SYSPRI3_Reg |= ((PendSV_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 21) | (PendSV_SUB_G_PRI << 21);
    SYSPRI3_Reg |= ((SysTick_Exception_GROUP_PRI << (_INT_SET_GROUP_AND_SGROUB_NUMBERS - 1)) << 29) | (SysTick_Exception_SUB_G_PRI << 29);
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/

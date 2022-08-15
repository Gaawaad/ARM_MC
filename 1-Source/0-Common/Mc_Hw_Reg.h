/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mc_Hw_Reg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef MC_HW_REG
#define MC_HW_REG

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_types.h"
#include "SysCtr_Cfg.h"
#include "GPIO_Cfg.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define _CORTEXM4_PIRF_BASE_ADD             (0xE000E000)
#define _SYSTEM_CTR_BASE_ADD                (0x400FE000)
#define _APB_GPIO_A_BASE_ADD                (0x40004000)
#define _AHB_GPIO_A_BASE_ADD                (0x40058000)
#define _APB_GPIO_B_BASE_ADD                (0x40005000)
#define _AHB_GPIO_B_BASE_ADD                (0x40059000)
#define _APB_GPIO_C_BASE_ADD                (0x40006000)
#define _AHB_GPIO_C_BASE_ADD                (0x4005A000)
#define _APB_GPIO_D_BASE_ADD                (0x40007000)
#define _AHB_GPIO_D_BASE_ADD                (0x4005B000)
#define _APB_GPIO_E_BASE_ADD                (0x40024000)
#define _AHB_GPIO_E_BASE_ADD                (0x4005C000)
#define _APB_GPIO_F_BASE_ADD                (0x40025000)
#define _AHB_GPIO_F_BASE_ADD                (0x4005D000)
#define _GPIO_DATA_MASK                     (0x3FC)    //use all bits
#define APINT_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD0C))
#define CONTROL_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD04))
#define PRI0_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x400))
#define PRI1_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x404))
#define PRI2_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x408))
#define PRI3_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x40C))
#define PRI4_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x410))
#define PRI5_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x414))
#define PRI6_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x418))
#define PRI7_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x41C))
#define PRI8_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x420))
#define PRI9_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x424))
#define PRI10_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x428))
#define PRI11_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x42C))
#define PRI12_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x430))
#define PRI13_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x434))
#define PRI14_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x438))
#define PRI15_Reg                           *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x43C))
#define SYSPRI1_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD18))
#define SYSPRI2_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD1C))
#define SYSPRI3_Reg                         *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0xD20))
#define EN0_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x100))
#define EN1_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x104))
#define EN2_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x108))
#define EN3_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x10C))
#define EN4_Reg                             *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x110))
#define DIS0_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x180))
#define DIS1_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x184))
#define DIS2_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x188))
#define DIS3_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x18C))
#define DIS4_Reg                            *((volatile u32*)(_CORTEXM4_PIRF_BASE_ADD + 0x190))
#define RCC_Reg                             *((volatile u32*)(_SYSTEM_CTR_BASE_ADD + 0x060))



#define RCGCGPIO_Reg                        *((volatile u32*)(_SYSTEM_CTR_BASE_ADD + 0x608))

#if(_GPIO_PORT_A_BUS == 1)
#define GPIODEN_A_Reg                       *((volatile u32*)(_AHB_GPIO_A_BASE_ADD + 0x51C))
#define GPIODIR_A_Reg                       *((volatile u32*)(_AHB_GPIO_A_BASE_ADD + 0x400))
#define GPIODATA_A_Reg                      *((volatile u32*)(_AHB_GPIO_A_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_A_Reg                      *((volatile u32*)(_AHB_GPIO_A_BASE_ADD + 0x520))
#define GPIOCR_A_Reg                        *((volatile u32*)(_AHB_GPIO_A_BASE_ADD + 0x524))
#else
#define GPIODEN_A_Reg                       *((volatile u32*)(_APB_GPIO_A_BASE_ADD + 0x51C))
#define GPIODIR_A_Reg                       *((volatile u32*)(_APB_GPIO_A_BASE_ADD + 0x400))
#define GPIODATA_A_Reg                      *((volatile u32*)(_APB_GPIO_A_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_A_Reg                      *((volatile u32*)(_APB_GPIO_A_BASE_ADD + 0x520))
#define GPIOCR_A_Reg                        *((volatile u32*)(_APB_GPIO_A_BASE_ADD + 0x524))
#endif


#if(_GPIO_PORT_B_BUS == 1)
#define GPIODEN_B_Reg                       *((volatile u32*)(_AHB_GPIO_B_BASE_ADD + 0x51C))
#define GPIODIR_B_Reg                       *((volatile u32*)(_AHB_GPIO_B_BASE_ADD + 0x400))
#define GPIODATA_B_Reg                      *((volatile u32*)(_AHB_GPIO_B_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_B_Reg                      *((volatile u32*)(_AHB_GPIO_B_BASE_ADD + 0x520))
#define GPIOCR_B_Reg                        *((volatile u32*)(_AHB_GPIO_B_BASE_ADD + 0x524))
#else
#define GPIODEN_B_Reg                       *((volatile u32*)(_APB_GPIO_B_BASE_ADD + 0x51C))
#define GPIODIR_B_Reg                       *((volatile u32*)(_APB_GPIO_B_BASE_ADD + 0x400))
#define GPIODATA_B_Reg                      *((volatile u32*)(_APB_GPIO_B_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_B_Reg                      *((volatile u32*)(_APB_GPIO_B_BASE_ADD + 0x520))
#define GPIOCR_B_Reg                        *((volatile u32*)(_APB_GPIO_B_BASE_ADD + 0x524))
#endif


#if(_GPIO_PORT_C_BUS == 1)
#define GPIODEN_C_Reg                       *((volatile u32*)(_AHB_GPIO_C_BASE_ADD + 0x51C))
#define GPIODIR_C_Reg                       *((volatile u32*)(_AHB_GPIO_C_BASE_ADD + 0x400))
#define GPIODATA_C_Reg                      *((volatile u32*)(_AHB_GPIO_C_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_C_Reg                      *((volatile u32*)(_AHB_GPIO_C_BASE_ADD + 0x520))
#define GPIOCR_C_Reg                        *((volatile u32*)(_AHB_GPIO_C_BASE_ADD + 0x524))
#else
#define GPIODEN_C_Reg                       *((volatile u32*)(_APB_GPIO_C_BASE_ADD + 0x51C))
#define GPIODIR_C_Reg                       *((volatile u32*)(_APB_GPIO_C_BASE_ADD + 0x400))
#define GPIODATA_C_Reg                      *((volatile u32*)(_APB_GPIO_C_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_C_Reg                      *((volatile u32*)(_APB_GPIO_C_BASE_ADD + 0x520))
#define GPIOCR_C_Reg                        *((volatile u32*)(_APB_GPIO_C_BASE_ADD + 0x524))
#endif


#if(_GPIO_PORT_D_BUS == 1)
#define GPIODEN_D_Reg                       *((volatile u32*)(_AHB_GPIO_D_BASE_ADD + 0x51C))
#define GPIODIR_D_Reg                       *((volatile u32*)(_AHB_GPIO_D_BASE_ADD + 0x400))
#define GPIODATA_D_Reg                      *((volatile u32*)(_AHB_GPIO_D_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_D_Reg                      *((volatile u32*)(_AHB_GPIO_D_BASE_ADD + 0x520))
#define GPIOCR_D_Reg                        *((volatile u32*)(_AHB_GPIO_D_BASE_ADD + 0x524))
#else
#define GPIODEN_D_Reg                       *((volatile u32*)(_APB_GPIO_D_BASE_ADD + 0x51C))
#define GPIODIR_D_Reg                       *((volatile u32*)(_APB_GPIO_D_BASE_ADD + 0x400))
#define GPIODATA_D_Reg                      *((volatile u32*)(_APB_GPIO_D_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_D_Reg                      *((volatile u32*)(_APB_GPIO_D_BASE_ADD + 0x520))
#define GPIOCR_D_Reg                        *((volatile u32*)(_APB_GPIO_D_BASE_ADD + 0x524))
#endif


#if(_GPIO_PORT_E_BUS == 1)
#define GPIODEN_E_Reg                       *((volatile u32*)(_AHB_GPIO_E_BASE_ADD + 0x51C))
#define GPIODIR_E_Reg                       *((volatile u32*)(_AHB_GPIO_E_BASE_ADD + 0x400))
#define GPIODATA_E_Reg                      *((volatile u32*)(_AHB_GPIO_E_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_E_Reg                      *((volatile u32*)(_AHB_GPIO_E_BASE_ADD + 0x520))
#define GPIOCR_E_Reg                        *((volatile u32*)(_AHB_GPIO_E_BASE_ADD + 0x524))
#else
#define GPIODEN_E_Reg                       *((volatile u32*)(_APB_GPIO_E_BASE_ADD + 0x51C))
#define GPIODIR_E_Reg                       *((volatile u32*)(_APB_GPIO_E_BASE_ADD + 0x400))
#define GPIODATA_E_Reg                      *((volatile u32*)(_APB_GPIO_E_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_E_Reg                      *((volatile u32*)(_APB_GPIO_E_BASE_ADD + 0x520))
#define GPIOCR_E_Reg                        *((volatile u32*)(_APB_GPIO_E_BASE_ADD + 0x524))
#endif


#if(_GPIO_PORT_F_BUS == 1)
#define GPIODEN_F_Reg                       *((volatile u32*)(_AHB_GPIO_F_BASE_ADD + 0x51C))
#define GPIODIR_F_Reg                       *((volatile u32*)(_AHB_GPIO_F_BASE_ADD + 0x400))
#define GPIODATA_F_Reg                      *((volatile u32*)(_AHB_GPIO_F_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_F_Reg                      *((volatile u32*)(_AHB_GPIO_F_BASE_ADD + 0x520))
#define GPIOCR_F_Reg                        *((volatile u32*)(_AHB_GPIO_F_BASE_ADD + 0x524))
#else
#define GPIODEN_F_Reg                       *((volatile u32*)(_APB_GPIO_F_BASE_ADD + 0x51C))
#define GPIODIR_F_Reg                       *((volatile u32*)(_APB_GPIO_F_BASE_ADD + 0x400))
#define GPIODATA_F_Reg                      *((volatile u32*)(_APB_GPIO_F_BASE_ADD + 0x000 + _GPIO_DATA_MASK))
#define GPIOLOCK_F_Reg                      *((volatile u32*)(_APB_GPIO_F_BASE_ADD + 0x520))
#define GPIOCR_F_Reg                        *((volatile u32*)(_APB_GPIO_F_BASE_ADD + 0x524))
#endif
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

 
#endif  /* MC_HW_REG */

/**********************************************************************************************************************
 *  END OF FILE: Mc_Hw_Reg.h
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  PORT_Cfg.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PORT_Cfg.h"

/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
PORT_Cfg_t PORT_Cfg_Arr[] = {
    {PORTA, PORT_Pin0, DIGITAL_ENABLE, INPUT, LOW, POLLDOWN},
    {PORTA, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin5, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin6, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTA, PORT_Pin7, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},

    {PORTB, PORT_Pin0, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin5, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin6, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTB, PORT_Pin7, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},

    {PORTC, PORT_Pin0, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin5, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin6, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTC, PORT_Pin7, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},

    {PORTD, PORT_Pin0, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin5, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin6, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTD, PORT_Pin7, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},

    {PORTE, PORT_Pin0, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin5, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin6, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTE, PORT_Pin7, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},

    {PORTF, PORT_Pin0, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTF, PORT_Pin1, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTF, PORT_Pin2, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTF, PORT_Pin3, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
    {PORTF, PORT_Pin4, DIGITAL_ENABLE, OUTPUT, LOW, FLOATING_PIN},
};
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  END OF FILE: PORT_Cfg.c
 *********************************************************************************************************************/

/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///************************* Application on Interrupts using INT0 ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{
	H_LED_Void_LedInit(BLUE_LED); ///initialize blue led
	H_LED_Void_LedInit(RED_LED); ///initialize Red led
	H_LCD_Void_LCDInt();         ///initialize LCD
	M_GIE_void_GIE_EN();         ///Enable General interrupt Function
    M_EXTI_INT0_void_Set_CallBack(A_EXTI_INT0Exc); ///Callback function
    M_EXTI_IN0_void_EXTI_INT0EN();  ///Enable EXTI_INT0 Function
    while (1)
       {


    	H_LED_Void_LedOn(RED_LED);

       }


}

void A_EXTI_INT0Exc(void)
{
   H_LED_Void_LedOff(RED_LED);    /// turn off Red led
   H_LED_Void_LedOn(BLUE_LED);    /// turn on blue led
   H_Lcd_void_LCDWriteString("CPU Interrupted");  /// print  "CPU Interrupted" on LCD
   _delay_ms(10000);                             /// delay for 10 s
   H_Lcd_void_LCDClear();                        /// clear LCD
   H_LED_Void_LedOff(BLUE_LED);     /// turn OFF blue led

}

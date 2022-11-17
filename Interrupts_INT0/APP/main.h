/*
 * main.h
 *
 *  Created on: Sep 26, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef APP_MAIN_H_
#define APP_MAIN_H_

/// *************** Includes ************//
#include "BIT_MATH.h"          ///**********_ Bit Math operation   _*************///
#include "STD_TYPS.h"          ///**********_ Standard Types file  _*************///
#include <util/delay.h>        ///**********_     delay library    _*************///
#include "DIO_Int.h"           ///**********_     DIO              _*************///
#include "LED_Int.h"           ///**********_     LED              _*************///
#include "SSD_int.h"           ///**********_     7SEG             _*************///
#include "PushButton_int.h"    ///**********_     PushButton       _*************///
#include "LCD_Int.h"           ///**********_     LCD              _*************///
#include "KeyPad_Int.h"        ///**********_     KeyPad           _*************///
#include "BUZ_Int.h"           ///**********_     BUZZER           _*************///
#include "EXTI_Int.h"          ///**********_     EXT_INT0         _*************///
#include "GIE_Int.h"           ///**********_  General interrupt   _*************///
/// *************** MACROS ************//
#define TRAFFICE_ON   1
#define TRAFFICE_OFF   0
#define TRAFFICE     TRAFFICE_ON


/// ************** PROTOTYPES ********//
void A_EXTI_INT0Exc(void);
#endif /* APP_MAIN_H_ */

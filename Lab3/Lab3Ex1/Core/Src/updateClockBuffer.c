/*
 * updateClockBuffer.c
 *
 *  Created on: Oct 5, 2022
 *      Author: Leanhthi
 */

#include "updateClockBuffer.h"



void updateClockBuffer () {
	led_buffer[0]=timer/10;
	led_buffer[1]=timer%10;
	led_buffer[2]=timer2/10;
	led_buffer[3]=timer2%10;

}

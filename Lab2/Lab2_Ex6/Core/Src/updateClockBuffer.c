/*
 * updateClockBuffer.c
 *
 *  Created on: Oct 5, 2022
 *      Author: Leanhthi
 */

#include "updateClockBuffer.h"


int hour =18; int minute=30; int second = 50;
void updateClockBuffer () {
	led_buffer[0]=hour/10;
	led_buffer[1]=hour%10;
	led_buffer[2]=minute/10;
	led_buffer[3]=minute%10;

}

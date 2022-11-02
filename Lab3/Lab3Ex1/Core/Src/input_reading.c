/*
 * input_reading.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Leanhthi
 */


#include "main.h"
#include "input_reading.h"
//we aim to work with more than one buttons
#define N0_OF_BUTTONS 1
//timer interrupt duration is10ms, so to pass 1 second,
//we need to jump to the interrupt service routine 100 time
#define	DURATION_FOR_AUTO_INCREASING 100
#define	BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED GPIO_PIN_SET
//the buffer that the final result is stored after
//debouncing
static GPIO_PinState buttonBuffer [ N0_OF_BUTTONS ];
//we define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1 [ N0_OF_BUTTONS ];
static GPIO_PinState debounceButtonBuffer2 [ N0_OF_BUTTONS ];
//wedefineaflagforabuttonpressedmorethan1second.
static uint8_t flagForButtonPress1s [ N0_OF_BUTTONS ];
//we define counter for automatically increasing the value
//after the button is pressed more than 1 second.
static uint16_t counterForButtonPress1s [ N0_OF_BUTTONS ];
void button_reading (void){
	for(chari = 0; i < N0_OF_BUTTONS ; i ++) {
		debounceButtonBuffer2 [i] = debounceButtonBuffer1 [i ];
		debounceButtonBuffer1 [i] = HAL_GPIO_ReadPin (
		BUTTON_1_GPIO_Port , BUTTON_1_Pin );
		if( debounceButtonBuffer1 [i] == debounceButtonBuffer2[i])
			buttonBuffer [i] = debounceButtonBuffer1 [i ];
		if( buttonBuffer [i] == BUTTON_IS_PRESSED ){
			//if a button is pressed, we start counting
			if( counterForButtonPress1s [i] <DURATION_FOR_AUTO_INCREASING ){
				counterForButtonPress1s [i ]++;
			}else{
			//the flag is turned on when 1 second has passed
			//since the button is pressed.
			flagForButtonPress1s [i] = 1;
			//to do
			}
		}else{
		counterForButtonPress1s [i] = 0;
		flagForButtonPress1s [i] = 0;
		}
	}
}


unsigned charis_button_pressed ( uint8_t index ){
	if( index >= N0_OF_BUTTONS )return0;
	return( buttonBuffer [ index ] == BUTTON_IS_PRESSED );
}

unsigned charis_button_pressed_1s (unsigned charindex ){
	if( index >= N0_OF_BUTTONS )return0 xff ;
	return( flagForButtonPress1s [ index ] == 1) ;
}

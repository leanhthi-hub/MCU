/*
 * Update7Seg.c
 *
 *  Created on: Oct 5, 2022
 *      Author: Leanhthi
 */
#include "Update7Seg.h"
void update7SEG (int index ){
switch( index_led ){
	case 0:
		//Displaythefirst7SEGwithled_buffer[0]
		displaySeg7(led_buffer[index_led]);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		break;
	case 1:
		//Displaythesecond7SEGwithled_buffer[1]
		displaySeg7(led_buffer[index_led]);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		break;
	case 2:
		//Displaythethird7SEGwithled_buffer[2]
		displaySeg7(led_buffer[index_led]);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		break;
	case 3:
		//Displaytheforth7SEGwithled_buffer[3]
		displaySeg7(led_buffer[index_led]);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		index_led=-1;
		break;
	default:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		break;
	}
}


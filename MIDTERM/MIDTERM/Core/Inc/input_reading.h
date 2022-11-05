/*
 * input_reading.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Leanhthi
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#define NO_OF_BUTTONS		3
void	button_reading (void);
extern int button_flag[NO_OF_BUTTONS];
extern int button_holding_flag[NO_OF_BUTTONS];
void button_reading();
unsigned char is_button_pressed(unsigned char index);

#include "main.h"
//unsigned char is_button_pressed_1s(unsigned char index);


#endif /* INC_INPUT_READING_H_ */

/*
 * SoftwareTimmer.h
 *
 *  Created on: Oct 5, 2022
 *      Author: Leanhthi
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_
extern int timer0_counter;
extern int timer0_flag;
extern int TIMER_CYCLE;

void setTimer0(int duration);
void timer_run();

#endif /* INC_SOFTWARETIMER_H_ */
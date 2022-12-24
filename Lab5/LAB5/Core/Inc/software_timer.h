/*
 * software_timer.h
 *
 *  Created on: Dec 14, 2022
 *      Author: leanhthi
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;

void setTimer0 (int duration);
void setTimer1 (int duration);
void setTimer2 (int duration);
void setTimer3 (int duration);
void setTimer4 (int duration);
void setTimer5 (int duration);
void timerRun();


void clearTimer0 (void);
void clearTimer1 (void);
void clearTimer2 (void);
void clearTimer3 (void);


#endif /* INC_SOFTWARE_TIMER_H_ */

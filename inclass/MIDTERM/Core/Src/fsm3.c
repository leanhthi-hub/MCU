/*
 * fsm3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Leanhthi
 */

#include "fsm.h"
#include "Led7segment.h"
int timeout = TIMEOUT;
int temp = 0;
void fsm_simple_buttons_run(){
	switch (status) {
		case RUNNING:
			if(button_flag[1]==1||button_flag[2]==1||timer==0){//BUTTON INC is pressed|| BUTTON DEC is pressed||(counter value==0)
				status=Waiting;
				button_flag[1]=0;
				button_flag[2]=0;
				setTimer0(EVERYSEC);
				temp=0;

			}

			displaySeg7(timer);
			if( timer0_flag == 1) {
					  timer--;
				setTimer0 (EVERYSEC);
				  }
			if(button_flag[0]==1){
				button_flag[0]=0;
				timer=0;
			}
			break;

		case Waiting:
			if( timer0_flag == 1) {
					  temp++;
					  displaySeg7(timer);
					  setTimer0 (EVERYSEC);// EVERYSEC = 100
				  }
			if(temp==timeout){
				status=RUNNING;
				setTimer0(EVERYSEC);
			}

			if(timer<MIN)timer=MAX;
			if(timer>MAX)timer=MIN;
			displaySeg7(timer);
			if(button_flag[0]==1){//RESET
				temp=0;
				button_flag[0]=0;
				timer=0;
			}
			if(button_flag[1]==1){//DEC
				temp=0;
				button_flag[1]=0;
				// When first time holding counterForButtonPress=3s
				// after that, counterForButtonPress=1s
				timer++;

			}
			if(button_flag[2]==1){//INC
				temp=0;
				button_flag[2]=0;
				// When first time holding counterForButtonPress=3s
				// after that, counterForButtonPress=1s
				timer--;
			}




			break;

		default:
			break;
	}
}
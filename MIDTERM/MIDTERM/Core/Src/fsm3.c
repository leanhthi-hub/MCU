/*
 * fsm3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Leanhthi
 */

#include "fsm.h"
#include "Led7segment.h"
void fsm_simple_buttons_run(){
	switch (status) {
		case RUNNING:

			if(timer<MIN)timer=MAX;
			if(timer>MAX)timer=MIN;
			displaySeg7(timer);
			if( timer0_flag == 1) {
					  timer--;
					  setTimer0 (100) ;
				  }
			if(button_flag[0]==1){
				button_flag[0]=0;
				timer=0;
			}
			if(button_flag[1]==1){
				status=Waiting;
				button_flag[1]=0;
				timer++;

			}
			if(button_flag[2]==1){
				status=Waiting;
				button_flag[2]=0;
				timer--;
			}



			break;

		case Waiting:
			if(timer<MIN)timer=MAX;
			if(timer>MAX)timer=MIN;
			displaySeg7(timer);
			if(button_flag[1]==1){
				status=Waiting;
				button_flag[1]=0;
				timer++;

			}
			if(button_flag[2]==1){
				status=Waiting;
				button_flag[2]=0;
				timer--;
			}




			break;
//		case MAN_RED:
//			toogleRed();
//			toogleRed1();
//			if(timer2>99)timer2=0;
//
//			timer=01;
//			if(button_flag[0]==1){
//				button_flag[0]=0;
//				timer2=GREEN_TIME/10;
//				status3=MAN_GREEN;
//			}
//			if(button_flag[1]==1){
//				button_flag[1]=0;
//				timer2++;
//			}
//			if(button_flag[2]==1){
//				button_flag[2]=0;
//				timer2--;
//			}
//			if(button_flag[3]==1){
//				button_flag[3]=0;
//				RED_TIME=timer2*10;
//			}
//			break;
//		case MAN_GREEN:
//			toogleGreen();
//			toogleGreen1();
//			if(timer2>99)timer2=0;
//
//			timer=01;
//			if(button_flag[0]==1){
//				button_flag[0]=0;
//				timer2=YELLOW_TIME/10;
//				status3=MAN_YELLOW;
//			}
//			if(button_flag[1]==1){
//				button_flag[1]=0;
//				timer2++;
//			}
//			if(button_flag[2]==1){
//				button_flag[2]=0;
//				timer2--;
//			}
//			if(button_flag[3]==1){
//				button_flag[3]=0;
//				YELLOW_TIME=timer2*10;
//			}
//
//
//
//			break;
//		case MAN_YELLOW:
//			toogleYellow();
//			toogleYellow1();
//			if(timer2>99)timer2=0;
//
//			timer=01;
//			if(button_flag[0]==1){
//				button_flag[0]=0;
//
//				status3=INIT;
//			}
//			if(button_flag[1]==1){
//				button_flag[1]=0;
//				timer2++;
//			}
//			if(button_flag[2]==1){
//				button_flag[2]=0;
//				timer2--;
//			}
//			if(button_flag[3]==1){
//				button_flag[3]=0;
//				YELLOW_TIME=timer2*10;
//			}
//
//
//			break;

		default:
			break;
	}
}
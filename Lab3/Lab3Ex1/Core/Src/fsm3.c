/*
 * fsm3.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Leanhthi
 */

#include "fsm.h"

void fsm_automatic_run3(){
	switch (status3	) {
		case RUNNING:
			if( timer0_flag == 1) {

					  timer--;
					  timer2--;
					  setTimer0 (10) ;
				  }

			break;
		case Waiting:


			break;

		default:
			break;
	}
}

/*
 * LightOne.cpp
 *
 *  Created on: 17 de abr de 2017
 *      Author: vieira
 */

#include "LightOne.h"

void LightOne::sequentialpart(){
	if(!reset){
		state = nextstate;
		//std::cout << "changed state " << nextstate << std::endl;
	}
	else
		state = S0;
}

void LightOne::combinationalpart(){
	if(reset)
		nextstate = S0;
	else{
		std::cout << "IL: " << IL << std::endl;
		switch(state){
			case S0:
				at = 1;
				highroad_lights = "001";
				lateralroad_lights = "100";
				if(sensor && IL){
					nextstate = S1;
				} else {
					nextstate = S0;
				}
				break;
			case S1:
				at = 1;
				highroad_lights = "010";
				lateralroad_lights = "100";
				if(IC)
					nextstate = S2;
				else
					nextstate = S1;
				break;
			case S2:
				at = 0;
				nextstate = S3;
				break;
			case S3:
				at = 1;
				highroad_lights = "100";
				lateralroad_lights = "001";
				if(IL)
					nextstate = S4;
				else
					nextstate = S3;
				break;
			case S4:
				at = 1;
				highroad_lights = "100";
				lateralroad_lights = "010";
				if(IC)
					nextstate = S5;
				else
					nextstate = S4;
				break;
			case S5:
				at = 0;
				nextstate = S0;
				break;
		}
	}
}

/*
 * Timer.cpp
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#include "Timer.h"

void Timer::proc(){
	if(at == 0 || reset == 1){
		IL.write(false);
		IC.write(false);
		counter = 0;
	}
	else{
		if(counter == 3) {
			IC.write(true);
			IL.write(false);
			counter++;
		}
		else if(counter == 5){
			IL.write(true);
			IC.write(false);
			counter = 0;
		} else {
			counter++;
			IC.write(false);
			IL.write(false);
		}
	}
}

void Timer::printcounter(){
	std::cout << counter << std::endl;
}

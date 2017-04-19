/*
 * Monitor.cpp
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */
#include "Monitor.h"

void Monitor::printlights(){
	std::cout << "                 RYG " <<  "                RYG" << std::endl;
	std::cout << "Highroad Lights: "<< highroad_lights
		  << " Lateral Lights: " <<  lateralroad_lights << " " << std::endl;
}


/*
 * main.cpp
 *
 *  Created on: 7 de abr de 2017
 *      Author: vieira
 */


#include <systemc.h>
#include <Top.h>
int sc_main(int argc,  char* argv[]){
	sc_time period(0.1, SC_MS);
	sc_clock clk("clk", period, 0.5);
	Top topzera("toperson");

	sc_start();
	return 0;
}


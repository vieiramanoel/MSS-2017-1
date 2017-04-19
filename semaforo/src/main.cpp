/*
 * main.cpp
 *
 *  Created on: 7 de abr de 2017
 *      Author: vieira
 */


#include <systemc.h>
#include <Top.h>
int sc_main(int argc,  char* argv[]){
	sc_time period(0.1, SC_NS);
	sc_clock clk("clk", period, 0.5);
	bool sensor { true };
	bool reset { false };

	Top topzera("toperson");
	topzera.clk(clk);
	topzera.sensor = sensor;
	topzera.reset = reset;

	sc_start(6, SC_NS);

	return 0;
}


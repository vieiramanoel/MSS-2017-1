/*
 * timer.h
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#ifndef INCLUDE_TIMER_H_
#define INCLUDE_TIMER_H_

#include <systemc.h>

SC_MODULE(Timer){
	sc_in<bool> at, reset;
	sc_in<bool> clk;
	sc_out<bool> IL, IC;

	SC_CTOR(Timer){
		counter = 0;
		SC_METHOD(proc);
		sensitive << reset << at << clk.pos();
		SC_METHOD(printcounter);
		sensitive << clk.pos();
	}

  private:
	void proc();
	void printcounter();
	int counter;
};



#endif /* INCLUDE_TIMER_H_ */

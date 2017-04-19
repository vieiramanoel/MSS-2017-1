/*
 * monitor.h
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#ifndef INCLUDE_MONITOR_H_
#define INCLUDE_MONITOR_H_

#include <systemc.h>

SC_MODULE(Monitor){
  public:
	sc_in<sc_lv<3>> highroad_lights, lateralroad_lights;
	sc_in<bool> clk;

	SC_CTOR(Monitor){
		SC_METHOD(printlights);
		sensitive << clk.pos();
	}
  private:
	void printlights();
};



#endif /* INCLUDE_MONITOR_H_ */

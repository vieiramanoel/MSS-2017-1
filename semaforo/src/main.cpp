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
	sc_lv<3> highroad, lateralroad;

	Top topzera("toperson");
	topzera.clk(clk);
	topzera.sensor = sensor;
	topzera.reset = reset;
	topzera.highroad_lights = highroad;
	topzera.lateralroad_lights = lateralroad;

	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");
	sc_trace(trace_file, topzera.clk, "clk");
	//sc_trace(trace_file, topzera.highroad_lights, "high");
	//sc_trace(trace_file, topzera.lateralroad_lights, "lateral");
	sc_trace(trace_file, topzera.IC, "IC");
	sc_trace(trace_file, topzera.IL, "IL");

	sc_start(6, SC_NS);

	sc_close_vcd_trace_file(trace_file);

	return 0;
}


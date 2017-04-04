/*
 * main.cpp
 *
 *  Created on: 31 de mar de 2017
 *      Author: vieira
 */

#include "systemc.h"
#include "Top.h"

int sc_main(int argc, char* argv[]){
	Top topzera("topperson");

	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");
	sc_trace(trace_file, topzera.A, "A");
	sc_trace(trace_file, topzera.B, "B");
	sc_trace(trace_file, topzera.opcode, "opcode");
	sc_trace(trace_file, topzera.Z, "Out");

	sc_start(20, SC_NS);

	sc_close_vcd_trace_file(trace_file);
	return 0;
}

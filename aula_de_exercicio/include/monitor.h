/*
 * monitor.h
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#ifndef INCLUDE_MONITOR_H_
#define INCLUDE_MONITOR_H_

#include <systemc.h>

SC_MODULE(monitor){
	sc_fifo_in<int32_t> data;

	void proc(){
		while(true){
			std::cout << data.read() << std::endl;
		}
	}

	SC_CTOR(monitor){
		SC_THREAD(proc);
	}
};




#endif /* INCLUDE_MONITOR_H_ */

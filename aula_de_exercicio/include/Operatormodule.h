/*
 * Operatormodule.h
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#ifndef SRC_OPERATORMODULE_H_
#define SRC_OPERATORMODULE_H_

#include <systemc.h>
#include "input.h"


SC_MODULE(operatormod){
  public:
	sc_fifo_in<input* > config_in;
	sc_fifo_in<int32_t> left_in, up_in;

	sc_fifo_out<input*> config_out;
	sc_fifo_out<int32_t> right_out;

	SC_CTOR(operatormod){
		SC_THREAD(proc);
	}

  private:
	void proc();
};
#endif /* SRC_OPERATORMODULE_H_ */

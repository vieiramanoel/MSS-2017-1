/*
 * Ulatb.h
 *
 *  Created on: 31 de mar de 2017
 *      Author: vieira
 */

#ifndef ULATB_H_
#define ULATB_H_
#include "systemc.h"
#include "Ula.h"
SC_MODULE(UlaTb){
  public:
	sc_out<sc_uint<3>> opcode;
	sc_out<sc_int<32>> A, B;
	sc_in<sc_int<32>> Z;
	sc_in<bool> zero;

	SC_CTOR(UlaTb){
		SC_THREAD(run);
	}

  private:
	void run();
};

#endif /* ULATB_H_ */

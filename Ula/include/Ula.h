#ifndef __ULA_H
#define __ULA_H
#include "systemc.h"

enum OPCODE{
	ADD, SUB, AND, OR, NOT, XOR, BYPASS, SLT
};

class ula {
public:
	ula();

private:
};

SC_MODULE(Ula){
public:
	sc_in<sc_uint<3>> opcode;
	sc_in<sc_int<32>> A, B;
	sc_out<sc_int<32>> Z;
	sc_out<bool> zero;

	SC_CTOR(Ula){
		SC_METHOD(proc);
		sensitive << A << B << opcode;
	}

  private:
	void proc();
	sc_int<32> Z_temp;
};

#endif

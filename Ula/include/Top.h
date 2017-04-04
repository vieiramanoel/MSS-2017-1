/*
 * Top.h
 *
 *  Created on: 31 de mar de 2017
 *      Author: vieira
 */

#ifndef TOP_H_
#define TOP_H_

#include "systemc.h"
#include "Ula.h"
#include "Ulatb.h"

SC_MODULE(Top){
  public:
	sc_signal<sc_int<32>> A, B, Z;
	sc_signal<sc_uint<3>> opcode;
	sc_signal<bool> zero;

	SC_CTOR( Top ) : tb("tb"), u("u") {
		u.opcode(opcode);     	tb.opcode(opcode);
		u.A(A);               	tb.A(A);
		u.B(B);					tb.B(B);
		u.Z(Z);                 tb.Z(Z);
		u.zero(zero);			tb.zero(zero);
	}
  private:
	UlaTb tb;
	Ula u;

};
#endif /* TOP_H_ */

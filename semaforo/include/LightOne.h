/*
 * LightOne.h
 *
 *  Created on: 17 de abr de 2017
 *      Author: vieira
 */

#ifndef LIGHTONE_H_
#define LIGHTONE_H_

#include <systemc.h>

enum State{
	S0, S1, S2, S3, S4, S5
};

SC_MODULE(LightOne){
  public:
	sc_in<bool> clk, reset, sensor;
	sc_in<bool> IL, IC;

	sc_out<bool> at;
	sc_out<sc_lv<3>> highroad_lights, lateralroad_lights;

	SC_CTOR(LightOne){
		state = S0;
		nextstate = S0;
		SC_METHOD(sequentialpart);
		sensitive << clk.pos() << reset;
		SC_METHOD(combinationalpart);
		sensitive << IL << IC << sensor << reset << clk.pos();
	}
  private:
	void sequentialpart();
	void combinationalpart();
	State state, nextstate;

};

#endif /* LIGHTONE_H_ */

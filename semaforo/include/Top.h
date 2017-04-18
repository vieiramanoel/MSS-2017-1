/*
 * top.h
 *
 *  Created on: 17 de abr de 2017
 *      Author: vieira
 */

#ifndef INCLUDE_TOP_H_
#define INCLUDE_TOP_H_

#include <systemc.h>
#include <LightOne.h>
SC_MODULE(Top){
  public:
	sc_signal<bool> sensor;
	sc_signal<sc_lv<6>> lights;
	sc_signal<bool> clk;

	SC_CTOR(Top) : light1("light1"){
		light1.clk(clk);
	}
  private:
	LightOne light1;

};



#endif /* INCLUDE_TOP_H_ */

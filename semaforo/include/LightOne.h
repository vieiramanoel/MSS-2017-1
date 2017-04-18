/*
 * LightOne.h
 *
 *  Created on: 17 de abr de 2017
 *      Author: vieira
 */

#ifndef LIGHTONE_H_
#define LIGHTONE_H_

#include <systemc.h>

SC_MODULE(LightOne){
	sc_in<bool> clk;

	SC_CTOR(LightOne){
		SC_METHOD(printclk);
		sensitive << clk.pos();
	}
	void printclk(){
		std::cout << clk << std::endl;
	}
};

#endif /* LIGHTONE_H_ */

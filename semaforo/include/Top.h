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
#include <Timer.h>
#include <Monitor.h>

SC_MODULE(Top){
  public:
	sc_in<bool> clk;
	sc_signal<bool> reset, sensor;
	sc_signal<bool> IC, IL;
	sc_signal<bool> at;
	sc_signal<sc_lv<3>> highroad_lights, lateralroad_lights;

	SC_CTOR(Top) : light1("light1"), timer("timer"), monitor("monitor"){
		at.write(true);
		light1.clk(clk);
		light1.sensor(sensor);
		light1.reset(reset);
		light1.at(at);
		light1.IC(IC);
		light1.IL(IL);
		light1.highroad_lights(highroad_lights);
		light1.lateralroad_lights(lateralroad_lights);

		timer.IC(IC);
		timer.IL(IL);
		timer.clk(clk);
		timer.at(at);
		timer.reset(reset);

		monitor.highroad_lights(highroad_lights);
		monitor.lateralroad_lights(lateralroad_lights);
		monitor.clk(clk);
	}
  private:
	LightOne light1;
	Timer timer;
	Monitor monitor;
};



#endif /* INCLUDE_TOP_H_ */

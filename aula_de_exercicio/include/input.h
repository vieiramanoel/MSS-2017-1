/*
 * input.h
 *
 *  Created on: 18 de abr de 2017
 *      Author: vieira
 */

#ifndef INCLUDE_INPUT_H_
#define INCLUDE_INPUT_H_

enum OPMODE{
	ADD, SUB, MULT, DIV
};

struct input{
	int dx;
	OPMODE op;
};


#endif /* INCLUDE_INPUT_H_ */

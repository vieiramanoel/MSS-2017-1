/*
 * Ulatb.cpp
 *
 *  Created on: 31 de mar de 2017
 *      Author: vieira
 */

#include "Ulatb.h"

void UlaTb::run(){
	while(true){
		for(int j = 0; j < 2; j++){
			if(j){
				A = 15;
				B = 10;
			}else{
				A = 2147483647;
				B = 2146433023;
			}
			for (int i = 0; i < 8; i++){
				opcode.write(i);
				switch(opcode.read()){
					case ADD:
						std::cout << "ADDing " ;
						break;
					case SUB:
						std::cout << "SUBtracting ";
						break;
					case AND:
						std::cout << "ANDing ";
						break;
					case OR:
						std::cout << "ORing";
						break;
					case NOT:
						std::cout << "NOTing";
						break;
					case XOR:
						std::cout << "XORing ";
						break;
					case BYPASS:
						std::cout << "BYPASSing (only A)";
						break;
					case SLT:
						std::cout << "SLTing ";
						break;
				};
			std::cout << A << " " << B << " = " << Z << std::endl;
			wait(1, SC_NS);
			}
		}
	}

}



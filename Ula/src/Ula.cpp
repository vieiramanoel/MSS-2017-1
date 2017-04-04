#include "Ula.h"

void Ula::proc(){
	switch(opcode.read()){
		case ADD:
			Z_temp = A.read() + B.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case SUB:
			Z_temp = A.read() - B.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case AND:
			Z_temp = A.read() & B.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case OR:
			Z_temp = A.read() | B.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case NOT:
			Z_temp = ~A.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case XOR:
			Z_temp = A.read() ^ B.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case BYPASS:
			Z_temp = A.read();
			Z = Z_temp;
			zero = (Z_temp == 0);
			break;
		case SLT:
			zero = ((A.read() < B.read()) == 0);
			if (A.read() < B.read())
				Z = 1;
			else
				Z = 0;
			break;
	}
}

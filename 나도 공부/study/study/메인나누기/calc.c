#include "calc.h"
int add(CalcData a) {
	return a.num1 + a.num2;
}

int sub(CalcData a) {
	return a.num1 - a.num2;
}

int div(CalcData a) {
	return a.num2 ? a.num1 / a.num2 : 0;
}
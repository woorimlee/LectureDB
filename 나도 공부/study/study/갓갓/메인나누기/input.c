#include <stdio.h>
#include "calc.h"

void inputValue(CalcData* a) {
	printf("연산한 두 개의 숫자를 입력해주세요 : ");
	scanf_s("%d %d", &a->num1, &a->num2);
}

void inputOp(CalcData* a) {
	printf("어떤 연산을 수행할 지 입력해주세요. 0:더하기, 1:빼기, 2:나누기\n: ");
	scanf_s("%d", &a->op);
}

#include <stdio.h>
#include "calc.h"



void showResult(CalcData a) {
	if (a.op == 0)
		printf("더한 결과 : %d", add(a));
	else if (a.op == 1)
		printf("뺀 결과 : %d", sub(a));
	else
		printf("나눈 결과 : %d", div(a));
}

int main() {
	int select = 1;
	CalcData data;
	while (select) {
		inputValue(&data);
		inputOp(&data);
		showResult(data);
		printf("연산을 계속 하기 싫으시면 0을 입력하세요 : ");
		rewind(stdin);
		scanf_s("%d", &select);
	}
	return 0;
}
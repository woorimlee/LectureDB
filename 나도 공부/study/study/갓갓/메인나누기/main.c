#include <stdio.h>
#include "calc.h"



void showResult(CalcData a) {
	if (a.op == 0)
		printf("���� ��� : %d", add(a));
	else if (a.op == 1)
		printf("�� ��� : %d", sub(a));
	else
		printf("���� ��� : %d", div(a));
}

int main() {
	int select = 1;
	CalcData data;
	while (select) {
		inputValue(&data);
		inputOp(&data);
		showResult(data);
		printf("������ ��� �ϱ� �����ø� 0�� �Է��ϼ��� : ");
		rewind(stdin);
		scanf_s("%d", &select);
	}
	return 0;
}
#include <stdio.h>
#include "calc.h"

void inputValue(CalcData* a) {
	printf("������ �� ���� ���ڸ� �Է����ּ��� : ");
	scanf_s("%d %d", &a->num1, &a->num2);
}

void inputOp(CalcData* a) {
	printf("� ������ ������ �� �Է����ּ���. 0:���ϱ�, 1:����, 2:������\n: ");
	scanf_s("%d", &a->op);
}

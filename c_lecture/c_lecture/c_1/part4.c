#include <stdio.h>

int f_1_2(int num1) {
	int count = 0;
	for (int j = 1; j <= num1; j++) {
		if (num1 % j == 0) {
			printf("%d ", j);
			count++;
		}
	}
	printf("\n��� ���� : %d\n", count);
	return 0;
}

void f_3(int num1) {
	int prime = 0;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0) {
			prime++;
		}
	}
	if (prime == 2) {
		printf("%d�� �Ҽ��Դϴ�\n", num1);
	}
	else printf("%d�� �Ҽ��� �ƴմϴ�.\n", num1);
}

void f_4(int num1, int num2) {
	printf("%d�� %d�� ����� : ", num1, num2);
	for (int i = 1; i <= num1; i++) {
		if (num1%i == 0 && num2%i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(void) {
	
	int i;
	scanf_s("%d", &i);
	f_1_2(i);
	f_3(503159);
	int j;
	scanf_s("%d %d", &i, &j);
	f_4(i, j);

	return 0;
}
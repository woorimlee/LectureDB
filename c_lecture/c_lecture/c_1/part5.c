#include <stdio.h>

void find_prime(int num) {
	//2~num ���� ���� �� �Ҽ� ã��
	int count = 0;
	printf("2~num���� �Ҽ� ã�� : ");
	for (int i = 2; i <= num; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;
		}
		if (count == 2) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {

	int i = 0;
	scanf_s("%d", &i);
	find_prime(i);

	return 0;
}
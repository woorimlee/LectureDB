#include <stdio.h>

void find_prime(int num) {
	//2~num 까지 숫자 중 소수 찾기
	int count = 0;
	printf("2~num까지 소수 찾기 : ");
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
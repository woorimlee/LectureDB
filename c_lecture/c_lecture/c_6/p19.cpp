#include <cstdio>

int sum(int *a, int *b) {
	*a += 5;
	*b += 10;
	return 0;
}

int main() {
	int num1 = 10;
	int num2 = 5;
	int num3 = sum(&num1, &num2);
	printf("%d, %d, %d", num1, num2, num3);
	return 0;
}

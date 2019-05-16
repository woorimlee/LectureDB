#include <stdio.h>

int swap(int *n1, int *n2) {
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	return 0;
}

int main() {
	int a = 1;
	int b = 10;
	swap(&a, &b);
	printf("%d, %d", a, b);
	return 0;
}

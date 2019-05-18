#include <stdio.h>

int swap(int **n1, int **n2) {
	int *temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	return 0;
}

int main() {
	int a = 1;
	int b = 10;
	int * ptrA = &a;
	int * ptrB = &b;
	printf("%d, %d\n", *ptrA, *ptrB);
	swap(&ptrA, &ptrB);
	printf("%d, %d", *ptrA, *ptrB);
	return 0;
}

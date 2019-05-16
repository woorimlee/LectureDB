#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
	a += 5;
	b += 10;
	return 0;
}
int main() {

	int num1 = 10;
	int num2 = 5;
	sum(num1, num2);

	return 0;
}


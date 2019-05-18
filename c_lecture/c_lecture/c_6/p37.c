#include <stdio.h>

int main() {

	int num = 1;
	int * ptr = &num;
	int ** pptr = &ptr;

	printf("num = %d, *ptr = %d, **pptr = %d", num, *ptr, **pptr);

	return 0;
}


#include <stdio.h>

int global;

int main(void) {
	int local;

	printf("전역 : %d\n지역 : %d", global, local);


	return 0;
}
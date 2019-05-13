#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	int * ptr = arr; // int * ptr = &arr[0]과 똑같은 문장이다.

	printf("배열을 포인터로 출력 : %d, %d, %d\n", *ptr, *(ptr + 1), *(ptr + 2));
	return 0;
}

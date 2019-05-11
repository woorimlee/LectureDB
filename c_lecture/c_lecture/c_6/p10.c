#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	printf("arr = %d, %d, %d\n", arr[0], arr[1], arr[2]);
	*arr += 10;
	printf("arr = %d, %d, %d\n", arr[0], arr[1], arr[2]);
}

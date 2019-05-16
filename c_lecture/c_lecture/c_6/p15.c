#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5] = { 0,-1, 5, 2, 4 };

	int *ptr = arr;
	for (int i = 0; i <sizeof(arr)/sizeof(int) ; i++) {
		*(ptr + i) += 10;
		printf("%d ", arr[i]);
	}

	return 0;
}

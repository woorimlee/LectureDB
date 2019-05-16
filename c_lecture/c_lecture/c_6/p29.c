#include <stdio.h>

int main() {
	int arr[2][2] = { 0, 1, 2, 3 };
	int * ptr = arr;

	for (int i = 0; i < 4; i++) {
		*(ptr + i) += 10;
	}

	for(int i = 0; i < 2; i++) 
		for(int j = 0; j < 2; j++)
			printf("%d ", arr[i][j]);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[3] = { 1, 2, 3 };
	int * ptr = arr; // int * ptr = &arr[0]�� �Ȱ��� �����̴�.

	printf("�迭�� �����ͷ� ��� : %d, %d, %d\n", *ptr, *(ptr + 1), *(ptr + 2));
	return 0;
}

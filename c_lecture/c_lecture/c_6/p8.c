#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("�迭 ���� �̸��� �ּ� : %p\n", arr);
	printf("ù ��° �ε��� : %p\n", &arr[0]);
	printf("�� ��° �ε��� : %p\n", &arr[1]);
	
	int num = 1;
	int * ptr = &num;
	*ptr = 2; // num�� 2�� �ٲ� ���̴�.

	arr = &num;

}



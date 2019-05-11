#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("배열 변수 이름의 주소 : %p\n", arr);
	printf("첫 번째 인덱스 : %p\n", &arr[0]);
	printf("두 번째 인덱스 : %p\n", &arr[1]);
	
	int num = 1;
	int * ptr = &num;
	*ptr = 2; // num은 2로 바뀔 것이다.

	arr = &num;

}



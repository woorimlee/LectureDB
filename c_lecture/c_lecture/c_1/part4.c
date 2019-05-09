#include <stdio.h>

int f_1(int num1, int num2) {
	if(num1 % num2 == 0)
		return num2;
	return 0;
}

int main(void) {
	
	int i;
	scanf_s("%d", &i);
	for (int j = 1; j <= i; j++) {
		int temp = f_1(i, j);
		if(temp)
			printf("%d ", temp);
	}





	return 0;
}
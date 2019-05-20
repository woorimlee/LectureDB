#include <stdio.h>

struct score {
	int math;
	int korean;
};

int main() {
	struct score arr[5];

	for (int i = 1; i <= 5; i++) {
		arr[i-1].math = 50 + i*5;
		arr[i-1].korean = 70 + i * 4;
	}

	for (int i = 1; i <= 5; i++) {
		printf("%d번째 구조체의 math = %d, korean = %d\n", i, arr[i-1].math, arr[i-1].korean);
	}
	return 0;
}
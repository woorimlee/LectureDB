#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i = rand();
	int j = (i % 50) + 1;
	int ans;

	for (int i = 4; i >= 0; i--) {
		printf("내가 생각한 수를 맞춰봐\n");
		scanf_s("%d", &ans);
		if (ans > j) {
			printf("그것보다 작아, 기회는 %d번 남았어.\n", i);
		}
		if (ans < j) {
			printf("그것보다 커, 기회는 %d번 남았어.\n", i);
		}
		if (ans == j) {
			printf("정답이야\n");
			break;
		}
		if (i == 0) {
			printf("오답이야\n");
			break;
		}
	}
	
	return 0;
}



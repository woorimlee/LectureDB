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
		printf("���� ������ ���� �����\n");
		scanf_s("%d", &ans);
		if (ans > j) {
			printf("�װͺ��� �۾�, ��ȸ�� %d�� ���Ҿ�.\n", i);
		}
		if (ans < j) {
			printf("�װͺ��� Ŀ, ��ȸ�� %d�� ���Ҿ�.\n", i);
		}
		if (ans == j) {
			printf("�����̾�\n");
			break;
		}
		if (i == 0) {
			printf("�����̾�\n");
			break;
		}
	}
	
	return 0;
}



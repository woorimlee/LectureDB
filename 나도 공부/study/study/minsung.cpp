#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	printf("�μ��� �̰� ��Ģ�����̴�.\n");
	printf("1.���� 2.���� 3.������ 4.����");
	int n,sum;
	scanf("%d", &n);
	switch (n)
	{
	case 1: sum = x + y; break;
	case 2: sum = x - y; break;
	case 3: sum = x / y; break;
	case 4: sum = x * y; break;
	default:
		break;
	}
	printf("�μ��� �̰� ����� %d��.", sum);
		
	return 0;
}



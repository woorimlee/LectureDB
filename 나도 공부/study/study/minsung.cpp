#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	printf("¹Î¼º¾Æ ÀÌ°Ô »çÄ¢¿¬»êÀÌ´Ù.\n");
	printf("1.µ¡¼À 2.»¬¼À 3.³ª´°¼À 4.°ö¼À");
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
	printf("¹Î¼º¾Æ ÀÌ°Ô °á°ú´Â %d´Ù.", sum);
		
	return 0;
}



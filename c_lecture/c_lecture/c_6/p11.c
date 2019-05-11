#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[] = "jamcoding";
	int num = 10;

	char * ptr_str = &str[0];
	int * ptr_num = &num;

	printf("str狼 林家 : %p, num狼 林家 : %p\n", ptr_str, ptr_num);
	printf("ptr_str + 1狼 林家 : %p, ptr_num + 1狼 林家 : %p\n", ptr_str + 1, ptr_num + 1);
	return 0;
}

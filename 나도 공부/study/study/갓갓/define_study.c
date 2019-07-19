#include <stdio.h>
#include <string.h>

#define MYCOPY(x, y) strcpy_s(x,5 ,y)
#define MYCOPYEX(x,y) strcpy_s(x,5, #y)

int main() {
	char a[5] = "he";
	char b[5] = "ro";
	MYCOPY(a, "ro");
	MYCOPYEX(b, he);
	printf("%s %s\n", a, b);

	return 0;
}
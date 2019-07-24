#include <iostream>
#include <stdio.h>
//stdio == standard console input ouput
//printf(), scanf(), 
using namespace std;

int abs(int a);
int add(int a, int b);

void main() {
	int i = -1;
	printf("%d", abs(i));
}

int abs(int a) {
	if (a > 0)
		return a;
	else
		return a * -1;

}


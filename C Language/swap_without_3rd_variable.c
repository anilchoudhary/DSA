#include<stdio.h>

int main()
{
	int a = 45, b = 78;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d b = %d\n", a, b );
	return 0;
}
#include<stdio.h>

int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main()
{
	int n = 6;
	printf("%d \n", fact(n) );
	return 0;
}
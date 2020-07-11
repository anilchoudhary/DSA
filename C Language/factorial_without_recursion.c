#include<stdio.h>

int main()
{
	int n = 6;
	long long int fact = 1;
	for (int i = n; i > 0; i--)
		fact *= i;
	printf("%d \n", fact );
	return 0;
}
#include<stdio.h>

int main()
{
	int n = 567;
	int rev = 0;
	while (n > 0)
	{
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	printf("%d\n", rev );
	return 0;
}
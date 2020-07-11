#include<stdio.h>

int main()
{
	int n = 20;

	int x = 0, y = 1, z;
	printf("0 1 ");
	for (int i = 0; i < n - 2; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%d ", z );
	}
}
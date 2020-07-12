#include<stdio.h>
int main()
{
	int n = 5;
	int m = n + (n - 1);
	int j = 0, k = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		j = 0; k = 1;
		while (j++ < i)
		{
			printf(" ");
		}
		while (j++ <= m - i)
			printf("%d", k++);
		printf("\n");
	}
}
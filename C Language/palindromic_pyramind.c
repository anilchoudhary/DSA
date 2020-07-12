#include <stdio.h>

int main()
{
	int i, j, n, m;
	n = 5;
	m = n + n - 1;
	int space = n - 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= space; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("%d", j);
		for (j = i - 1; j >= 1; j--)
			printf("%d", j);
		printf("\n");
		space--;
	}
	return 0;
}

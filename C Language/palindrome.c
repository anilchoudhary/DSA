#include<stdio.h>

bool is_palin(int n)
{
	int temp = n;
	int rev = 0;
	while (temp > 0)
	{
		rev = rev * 10 + (temp % 10);
		temp /= 10;
	}
	if (rev == n)
		return 1;
	else
		return 0;
}

int main()
{
	int n = 45654;

	if (is_palin(n))
		printf("Yes, Palindrome\n");
	else
		printf("Not a Palindrome\n");
	return 0;
}
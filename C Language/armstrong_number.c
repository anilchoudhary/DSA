#include<stdio.h>
#include<math.h>
int count_digit(int n)
{
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int main()
{
	int n = 407, r = 0;
	int temp = n;
	int count = count_digit(n);
	int an = 0, ans = 0;
	while (n > 0)
	{
		r = n % 10;
		n /= 10;
		ans = pow(r, count);
		an = an + ans;
	}
	if (an == temp)
		printf("Armstrong Number\n");
	else
		printf("Not an Armstrong Number\n");

	return 0;
}
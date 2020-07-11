#include<stdio.h>

int main()
{
	int year = 400;

	if (year % 4 == 0 && year % 100 != 0)
		printf("Leap Year\n");
	else if (year % 400 == 0)
		printf("Leap Year\n");
	else
		printf("Not a Leap year\n");
	return 0;
}
#include<stdio.h>
struct employee {
	int empid;
	char name[100];
	float salary;
};
int main()
{
	struct employee *ptr = 0;
	ptr++;
	printf("Size of the structure employee:  %d\n", ptr);
	return 0;
}
// Finding the majority element in the given array (using moore's algorithm )

#include<bits/stdc++.h>
using namespace std;

// Finding candidate key for majority element
int getMajorityElement(int arr[], int size)
{
	int majorityIndex = 0;
	int  count = 1;

	for (int index = 1; index < size; index++)
	{
		if (arr[majorityIndex] == arr[index])
			count++;
		else
			count--;
		if (count == 0)
		{
			majorityIndex = index;
			count = 1;
		}
	}
	return arr[majorityIndex];
}

// checking whether the given element is majority element

int isMajorityElement(int arr[], int size, int majorityElement)
{
	int count = 0;
	for (int index = 0; index < size; index++)
		if (arr[index] == majorityElement)
			count++;
	return (count > size / 2);
}


int main()
{
	int arr[6] = {2, 2, 5, 2, 1, 2};
	int x = getMajorityElement(arr, 6);
	int ans = isMajorityElement(arr, 6, x);
	if (ans)
		cout << x;
	else
		cout << "-1";
	return 0;
}
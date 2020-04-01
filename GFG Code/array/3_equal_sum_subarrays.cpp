#include <iostream>
using namespace std;


int findSplit(int arr[], int n)
{
	int i;

	int preSum = 0;

	int ind1 = -1, ind2 = -1;

	int S;

	S = arr[0];
	for (i = 1; i < n; i++)
		S += arr[i];

	if(S % 3 != 0)
		return 0;

	int S1 = S / 3;
	int S2 = 2 * S1;

	for (i = 0; i < n; i++)
	{
		preSum += arr[i];

		if (preSum % S1 == 0 && ind1 == -1)
			ind1 = i;

		else if(preSum % S2 == 0)
		{
			ind2 = i;

			break;
		}
	}

	if (ind1 != -1 && ind2 != -1)
	{
		cout << "(" << ind1 << ", "<< ind2 << ")";
		return 1;
	}

	return 0;
}

int main()
{
	int arr[] = { 1, 3, 4, 0, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (findSplit(arr, n) == 0)
		cout << "-1";
	return 0;
}

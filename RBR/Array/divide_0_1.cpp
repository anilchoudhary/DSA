#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {0, 1, 0, 0, 1, 0, 1, 0, 1};
	int l, h;
	l = 0; h = 8;
	while (l < h)
	{
		if (arr[l] == 1 && arr[h] == 0)
		{
			swap(arr[l], arr[h]);
			l++;
			h--;
		}

		if (arr[l] == 0)
			l++;
		if (arr[h] == 1)
			h--;
	}
	for (int i = 0; i < 9; i++)
		cout << arr[i] << " ";
	return 0;
}

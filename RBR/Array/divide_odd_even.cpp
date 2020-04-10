#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {04,1,40,70,11,10,17,05,10};
	int l, h;
	l = 0; h = 8;
	while (l < h)
	{
		if ((arr[l]%2==0) && (arr[h]%2==1))
		{
			swap(arr[l], arr[h]);
			l++;
			h--;
		}

		if (arr[l]%2 == 1)
			l++;
		if (arr[h]%2 == 0)
			h--;
	}
	for (int i = 0; i < 9; i++)
		cout << arr[i] << " ";
	return 0;
}

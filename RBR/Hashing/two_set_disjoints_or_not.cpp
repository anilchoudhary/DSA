#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {99, 66, 55, 44, 88, 99, 22, 33};
	int brr[] = {3, 24, 5, 73, 2, 5, 6, 2, 1};
	int m = sizeof(arr) / sizeof(arr[0]);
	int n = sizeof(brr) / sizeof(brr[0]);
	int flag = 1;
	unordered_set<int> isDisjoint;
	for (int i = 0; i < m; i++)
		isDisjoint.insert(arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (isDisjoint.find(brr[i]) != isDisjoint.end())
			flag = 0;
	}
	if (flag)
		cout << "Disjoint";
	else
		cout << "Not Disjoint";
	return 0;

}
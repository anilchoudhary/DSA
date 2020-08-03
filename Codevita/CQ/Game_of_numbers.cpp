#include<bits/stdc++.h>
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen ("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	int *arr = new int[n];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
		ans ^=  arr[i];
	if (ans)
		cout << "AMAN" << endl;
	else
		cout << "JASBIR" << endl;
	return 0;

}
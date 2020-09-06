#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (str[0] == arr[i][0] || str[0] == arr[i][1] || str[1] == arr[i][0] || str[1] == arr[i][1])
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
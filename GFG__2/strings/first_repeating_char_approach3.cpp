#include<bits/stdc++.h>
using namespace std;

int first_repeat(string s1)
{
	vector<int> fi(256, -1);
	int ans = INT_MAX;
	for (int i = s1.length() - 1; i > -1; i--)
	{
		if (fi[s1[i]] == -1)
			fi[s1[i]] = i;
		else
			ans = i;
	}
	return (ans == INT_MAX) ? -1 : ans;
}

int main()
{
	string s1 = "forgeeks";
	int x = first_repeat(s1);
	cout << x << endl;
	return 0;
}
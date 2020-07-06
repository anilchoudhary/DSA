#include<bits/stdc++.h>
using namespace std;

int first_repeat(string s1)
{
	vector<int> fi(256, -1);
	int ans = INT_MAX;
	for (int i = 0; i < s1.length(); i++)
	{
		if (fi[s1[i]] == -1)
			fi[s1[i]] = i;
		else
			ans = min(ans, fi[s1[i]]);
	}
	return (ans == INT_MAX) ? -1 : ans;
}

int main()
{
	string s1 = "geeksforgeeks";
	int x = first_repeat(s1);
	cout << x << endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int first_repeat(string s1)
{
	unordered_map <char, int> mymap, mymapi;
	for (int i = 0; i < s1.length(); i++)
	{
		if (mymap[s1[i]] == 0)
		{
			mymapi[s1[i]] = i;
		}
		mymap[s1[i]]++;
	}
	int ans = INT_MAX;
	for (int i = 0; i < s1.length(); i++)
	{
		if (mymap[s1[i]] > 1)
		{
			if (mymapi[s1[i]] < ans)
				ans = mymapi[s1[i]];
		}
	}
	if (ans != INT_MAX)
		return ans;
	else
		return -1;
}

int main()
{
	string s1 = "forgeeks";
	int x = first_repeat(s1);
	cout << x << endl;
	return 0;
}
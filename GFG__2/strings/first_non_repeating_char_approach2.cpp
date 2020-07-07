#include<bits/stdc++.h>
using namespace std;

int first_repeat(string s1)
{
	int n = s1.length();
	vector<int> count(256, n);
	for (int i = 0; i < s1.length(); i++)
	{
		if (count[s1[i]] == n)
			count[s1[i]] = i;
		else
			count[s1[i]] = n;
	}
	int ans = *min_element(count.begin(), count.end());

	if (ans != n)
		return ans;
	else
		return -1;
}

int main()
{
	string s1 = "geeksforforgeeks";
	int x = first_repeat(s1);
	cout << x << endl;
	return 0;
}
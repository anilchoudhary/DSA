#include<bits/stdc++.h>
using namespace std;

void subsets(string str, string ans = " ", int i = 0)
{
	if (i == str.length())
	{
		cout << "_" << ans << "_";
		return;
	}
	subsets(str, ans, i + 1);
	subsets(str, ans + str[i], i + 1);
}

int main()
{
	string str = "abc";
	subsets(str);
	return 0;
}
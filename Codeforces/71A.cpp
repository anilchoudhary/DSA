#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int n = str.length();
		if (n <= 10)
			cout << str << endl;
		else
		{
			string ans = "";
			ans = ans + str[0] + to_string(n - 2) + str[n - 1];
			cout << ans << endl;
		}

	}
	return 0;
}
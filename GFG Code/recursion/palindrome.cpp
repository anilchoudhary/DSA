#include<bits/stdc++.h>
using namespace std;

bool ispalin(string str, int s, int e)
{
	if (s > e)
		return 1;
	if (str[s] != str[e])
		return 0;

	return ispalin(str, ++s, --e);
}

int main()
{
	int n;
	string str = "aabb";
	n = str.length();
	int s = 0;
	int e = n - 1;

	bool what = ispalin(str, s, e);
	if (what)
		cout << "yes it's palindrome";
	else
		cout << "it's not palindrome";
}

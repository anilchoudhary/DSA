#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int k)
{
	for (int i = 1; i <= n; i++)
	{
		cout << setw(k);
		for (int j = (2 * i + 1); j >= 1; j--)
			cout << "*";
		cout << endl;
		k -= 1;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int k = n;
	int l = 0;
	if (n <= 1) cout << "You cannot generate christmas tree\n";
	else if (n > 20)cout << "Tree is no more\n";
	else
	{
		cout << setw(k + 1) << "*" << endl;
		pattern(n, k);
		for (int i = 2; i < n; i++, l++)
		{
			pattern(n - 1 - l, k);
		}
		cout << setw(k + 1) << "*" << endl;
		cout << setw(k + 1) << "*" << endl;
	}
}
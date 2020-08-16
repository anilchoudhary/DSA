#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
	{
		int pc, pr;
		cin >> pc >> pr;
		int dc, dr;
		if (pc % 9 == 0)
			dc = pc / 9;
		else
			dc = pc / 9 + 1;

		if (pr % 9 == 0)
			dr = pr / 9;
		else
			dr = pr / 9 + 1;

		if (dc < dr)
			cout << 0 << " " << dc << endl;
		else if (dc > dr)
			cout << 1 << " " << dr << endl;
		else
			cout << 1 << " " << dr << endl;
	}
	return 0;
}
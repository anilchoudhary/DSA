#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int iw, ew;
	cin >> iw >> ew;
	if (iw < 0 || ew < 0)
	{
		cout << "INVALID INPUT";
		return;
	}
	float temp;
	long double sum = 0.0;
	for (int i = 0; i < iw; i++)
	{
		cin >> temp;
		sum += temp * 18.0;
	}
	for (int i = 0; i < ew; i++)
	{
		cin >> temp;
		sum += temp * 12.0;
	}
	cout << "Total Estimated Cost:" << fixed << setprecision(1) << sum << "INR";
	return;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}
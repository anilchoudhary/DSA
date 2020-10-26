#include<bits/stdc++.h>
using namespace std;


void solve()
{
	int n, x, p, k, result = 0;
	cin >> n >> x >> p >> k;
	int gtx = 0, stx = 0;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		if (vec[i] < x)
			stx++;
		else if (vec[i] > x)
			gtx++;
	}

	if (stx > (p - 1))
	{
		if (k <= stx && (stx - k + 1) >= (stx - (p - 1)))
			result = stx - (p - 1);
		else
			result = -1;
	}
	else if (gtx > (n - p))
	{
		if (k > (n - gtx) && (k - (n - gtx)) >= (gtx - (n - p)))
			result = (gtx - (n - p));
		else
			result = -1;
	}
	cout << result << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
#include<bits/stdc++.h>
#define MOD 1000000009
using namespace std;

int comparison(double a, double b) {
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		long long int x, y, l, r, m = 1, z = 0;
		double mmx = 0;
		cin >> x >> y >> l >> r;

		vector<long long int> d;
		while ((m) <= r)
		{
			while ((m) <= r && ((m & r) == 0))m = m << 1;
			long long int sp = ((m - 1) | (((-1 ^ (m - 1)) << 1)&r) );
			if (sp < l)break;
			long long int xx = (sp & x);
			long long int yy = (sp & y);
			double mul = (double(xx) / MOD) * (double(yy) / MOD);
			int val = comparison(mul, mmx);
			if ( val == 0 && z > sp) z = sp, d.push_back(sp);
			if ( val == 1 )mmx = mul,  z = sp, d.clear(), d.push_back(sp);
			m = m << 1;
		}
		long long int xx = (r & x);
		long long int yy = (r & y);
		double mul = (double(xx) / MOD) * (double(yy) / MOD);
		int val = comparison(mul, mmx);
		if (val == 0)d.push_back(r);
		if (val == 1)z = r, mmx = mul, d.clear(), d.push_back(r);

		if (mmx == 0) {
			cout << l << endl;
			continue;
		}
		long long int ans = 0;
		for (int i = 0; i < d.size(); i++)
		{
			long long int zz = d[i];

			while (m < l)m = m << 1;
			while (m > 0) {
				long long int a = (m & l);
				long long int b = (m & (zz & (x | y)));
				if (a < b)break;
				ans = (ans | a);
				m = m >> 1;
			}
			while (m > 0) {
				long long int a = (m & (zz & (x | y)));
				ans = (ans | a);
				m = m >> 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}





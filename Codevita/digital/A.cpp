#include<bits/stdc++.h>
#define int long long int
#define PI 3.14
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int r1, r2, r3;
		cin >> r1 >> r2 >> r3;
		int v1, v2, v3;
		cin >> v1 >> v2 >> v3;
		int n;
		cin >> n;
		// // cout << n << endl;
		// float a1, a2, a3;
		// float ar1, ar2, ar3;
		// ar1 = v1 * n ;
		// ar2 = v2 * n ;
		// ar3 = v3 * n ;
		// float c1, c2, c3;
		// cout << ar1  << endl << ar2  << endl << ar3  << endl;
		// c1 = 2 * PI * r1;
		// c2 = 2 * PI * r2;
		// c3 = 2 * PI * r3;
		// ar1 = fmod(ar1 , c1);
		// ar2 = fmod(ar2 , c2);
		// ar3 = fmod(ar3 , c3);
		// // if (ar1 % c1 == 0 && ar2 % c2 == 0 && ar3 % c3 == 0)
		// // 	cout << "TRUE";
		// // else
		// // 	cout << "FALSE";
		// // cout << endl;
		// cout << c1 << endl;
		// cout << c2 << endl;
		// cout << c3 << endl;
		// a1 = (ar1 * 360) ;
		// a2 = (ar2 * 360) ;
		// a3 = (ar3 * 360) ;
		// cout << a1 / c1 << endl << a2 / c2 << endl << a3 / c3 << endl;
		// if (abs(a1 - a2) < 1e-9 && abs(a1 - a3) < 1e-9)
		//
		//
		int a1, a2, a3;
		a1 = (v1 * n) % 360;
		a2 = (v2 * n) % 360;
		a3 = (v3 * n) % 360;
		if (a1 == a2 && a1 == a3)
			cout << "TRUE";
		else
			cout << "FALSE";
		cout << endl;
	}

	return 0;
}
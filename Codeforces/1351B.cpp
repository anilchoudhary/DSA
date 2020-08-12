#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int min1 = a > b ? b : a;
		int min2 = c > d ? d : c;
		int max1 = a > b ? a : b;
		int max2 = c > d ? c : d;
		int x = min1 + min2;
		if (max1 == max2 && x == max1 && x == max2)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n; int sum = 0;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		for (int i = 0; i < n; i++)
		{
			if (a[i] > b[i])
				sum += b[i];
			else
				sum += a[i];
		}
		cout << sum << endl;
	}
}

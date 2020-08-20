#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	reverse(vec.begin(), vec.begin() + k);
	reverse(vec.begin() + k, vec.end() );
	reverse(vec.begin(), vec.end());
	for (auto x : vec)
		cout << x << " ";
	return 0;
}
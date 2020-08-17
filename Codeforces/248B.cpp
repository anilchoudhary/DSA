#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
	int n;
	if (n < 3)
	{
		cout << -1 << endl;
		return 0;
	}
	int x = 2;
	int carry = 0;
	vector<int> vec{2, 1, 0};
	while (vec.size() != n)
	{
		for (int i = vec.size() - 1; i > -1; i--)
		{

			vec[i] = (vec[i] * x + carry) % 10;
			carry = (vec[i] * x + carry) / 10;
		}
		x++;
		while (carry)
		{
			vec.insert(vec.begin(), carry % 10);
			carry = carry / 10;
		}
	}

	for (auto x : vec)
		cout << x;
	return 0;
}
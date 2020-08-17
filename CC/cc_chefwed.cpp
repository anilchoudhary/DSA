#include<bits/stdc++.h>
using namespace std;

int count_arguments(const vector<int> &fam);

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, x;
		cin >> n >> k;
		vector<int> vec(n);
		vector<int> family(100, 0);
		int total_inefficiency = k;

		for (int i = 0; i < n; i++)
		{
			cin >> vec[i];
			vec[i] -= 1;
		}


		for (int i = 0; i < n; i++)
		{
			family[vec[i]] += 1;
			x = count_arguments(family);

			if (x >= k)
			{
				family[vec[i]] -= 1;
				total_inefficiency = total_inefficiency + k +  count_arguments(family);
				fill(family.begin(), family.end(), 0);
				family[vec[i]] += 1;
			}
		}
		total_inefficiency += count_arguments(family);
		cout << total_inefficiency << endl;
	}
	return 0;
}

int count_arguments(const vector<int> &v)
{
	int argument = 0;
	for (auto x : v)
	{
		if (x > 1)
			argument += x;
	}
	return argument;
}
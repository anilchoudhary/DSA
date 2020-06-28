#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i))
			return 0;
	}
	return 1;
}

int fibn(int a, int b, int n)
{
	int c;
	for (int i = 1; i <= n - 2; i++)
	{
		c = a + b;
		b = c;
		a = c - a;
	}
	return c;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n1, n2, x;
	cin >> n1 >> n2;
	vector<int> list1, list2;
	for (int i = n1; i <= n2; i++)
	{
		if (isPrime(i))
		{
			if (find(list1.begin(), list1.end(), i) == list1.end())
				list1.insert(list1.begin(), 1, i);
		}
	}
	for (int i = 0; i < list1.size(); i++)
		cout << list1[i] << " ";
	cout << endl;
	for (int i = 0; i < list1.size(); i++)
	{
		for (int j = 0; j < list1.size(); j++)
		{
			x = stoi(to_string(list1[i]) + to_string(list1[j]));
			if (isPrime(x))
			{
				if (find(list2.begin(), list2.end(), x) == list2.end())
					list2.insert(list2.begin(), 1, x);
			}
		}
	}
	for (int i = 0; i < list2.size(); i++)
		cout << list2[i] << " ";
	cout << endl;
	int maxi = *max_element(list2.begin(), list2.end());
	int mini = *min_element(list2.begin(), list2.end());
	cout << maxi << endl << mini << endl;
	cout << fibn(mini, maxi, list2.size()) << endl;
	return 0;
}
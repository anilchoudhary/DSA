#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int size_of_vector;
		cin >> size_of_vector;

		// vector<int> vec(size_of_vector);
		int x;
		int remainder_0 = 0;
		int remainder_1 = 0;
		int remainder_2 = 0;

		for (int i = 0; i < size_of_vector; i++)
		{
			cin >> x;
			if (x % 3 == 0)
				remainder_0++;
			else if (x % 3 == 1)
				remainder_1++;
			else
				remainder_2++;
		}

		if (remainder_0 > remainder_1 + remainder_2 + 1 || (remainder_0 == 0 && remainder_1 != 0 && remainder_2 != 0))
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}
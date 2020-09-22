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
		int number_of_elements;
		cin >> number_of_elements;

		vector<int> vec_of_elements(number_of_elements);
		int remainder_0 = 0, remainder_1 = 0, remainder_2 = 0;

		for (int i = 0; i < number_of_elements; i++)
		{
			cin >> vec_of_elements[i];
			if (vec_of_elements[i] % 3 == 0)
				remainder_0++;
			else if (vec_of_elements[i] % 3 == 1)
				remainder_1++;
			else
				remainder_2++;
		}
		if (remainder_0 > remainder_1 + remainder_2 || (remainder_0 == 0 && remainder_1 == 1 && remainder_2 == 1))
			cout << "No";
		else
			cout << "Yes";
	}
	return 0;
}
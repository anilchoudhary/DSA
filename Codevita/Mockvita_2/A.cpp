#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int number_of_brides_and_grooms;
	cin >> number_of_brides_and_grooms;
	string brides, grooms;
	cin >> brides >> grooms;
	int matched_couple = 0;
	for (int i = 0; i < number_of_brides_and_grooms; i++)
	{
		for (int j = 0; j < number_of_brides_and_grooms; j++)
		{
			if (brides[i] == grooms[j])
			{
				matched_couple += 1;
				grooms.at(j) = 'x';
				brides.at(i) = 'x';
				break;
			}
		}
		if (brides.at(i) != 'x')
			break;
	}
	int unmatched_couple = number_of_brides_and_grooms - matched_couple;
	cout << unmatched_couple;
	return 0;
}
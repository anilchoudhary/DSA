#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 2;
	vector<int> vec{1, 2, 3, 4};
	int diag1 = 0;
	int diag2 = 0;
	int i = 0;
	int j = n - 1;
	while (i  < n * n)
	{
		diag1 += vec[i ];
		i += n + 1;
		// cout << diag1 << endl;
	}
	while (j  < n * n - 1)
	{
		diag2 += vec[j ];
		j += n - 1;
		// cout << diag2 << endl;
	}
	cout << diag1 << endl << diag2;
	return 0;

}
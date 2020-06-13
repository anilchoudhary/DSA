#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n = 6;
	int i, j, k, temp;
	i = 0; j = 1;
	for (int l = 0; l < n - 2; l++)
	{
		k = i + j;
		temp = j;
		j = k;
		i = temp;
	}
	cout << k << endl;
	return 0;
}
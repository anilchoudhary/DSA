#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int low, high, k;
	cin >> low >> high >> k;
	int tL = low, tR = high;
	int count_0 = 0, count_1 = 0;
	int DP[k][2];
	int L[2] = { 0 }, R[2] = { 0 };
	L[low % 2] = low, R[high % 2] = high;

	low++, high--;

	if (low <= tR && high >= tL)
		L[low % 2] = low, R[high % 2] = high;


	if (R[0] && L[0])
		count_0 = (R[0] - L[0]) / 2 + 1;
	if (R[1] && L[1])
		count_1 = (R[1] - L[1]) / 2 + 1;



	DP[1][0] = count_0;
	DP[1][1] = count_1;
	for (int i = 2; i <= k; i++)
	{

		DP[i][0] = (count_0 * DP[i - 1][0]
		            + count_1 * DP[i - 1][1]);

		DP[i][1] = (count_0 * DP[i - 1][1]
		            + count_1 * DP[i - 1][0]);
	}
	cout << DP[k][0] % MOD;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string X = "abcaf";
	string Y = "acbcf";
	int m = X.length();
	int n = Y.length();
	int dp[m + 1][n + 1];
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (X[i] == Y[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			// cout << dp[i][j] << " ";
		}
		// cout << endl;
	}
	cout << dp[m][n] << endl;
	return 0;
}
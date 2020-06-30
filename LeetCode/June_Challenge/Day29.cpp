class Solution {
public:
    int uniquePaths(int m, int n) {

        int row = n;
        int col = m;

        int dp[row][col];

        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }

        return dp[row - 1][col - 1];
    }
};
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r = dungeon.size();
        int c = dungeon[0].size();
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = r - 1; i >= 0; i--)
        {
            for (int j = c - 1; j >= 0; j--)
            {
                if (i == (r - 1) && (j == (c - 1)))
                    ans[i][j] = max(1, 1 - dungeon[i][j]);
                else if (i == (r - 1))
                    ans[i][j] = max(ans[i][j + 1] - dungeon[i][j], 1);
                else if (j == (c - 1))
                    ans[i][j] = max(ans[i + 1][j] - dungeon[i][j], 1);
                else
                    ans[i][j] = max(1, min(ans[i + 1][j], ans[i][j + 1]) - dungeon[i][j]);
            }
        }
        return ans[0][0];
    }
};
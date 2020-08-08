class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <int> us;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (us.find(board[i][j]) != us.end())
                    return false;
                if (board[i][j] != '.')
                    us.insert(board[i][j]);
            }
            us.clear();
        }
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (us.find(board[j][i]) != us.end())
                    return false;
                if (board[j][i] != '.')
                    us.insert(board[j][i]);
            }
            us.clear();
        }
        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                for (int k = i; k < i + 3; k++)
                {
                    for (int l = j; l < j + 3; l++)
                    {
                        if (us.find(board[k][l]) != us.end())
                            return false;
                        if (board[k][l] != '.')
                            us.insert(board[k][l]);
                    }
                }
                us.clear();
            }
        }
        return true;
    }
};
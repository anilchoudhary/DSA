class Solution {
public:

    int search(vector<vector<char>>& board, int i, int j, string word)
    {
        if (word.length() == 0)
            return 1;

        if (i >= board.size() || j >= board[0].size() || i < 0 || j < 0 || board[i][j] != word[0])
            return 0;

        char ch = board[i][j];
        board[i][j] = '*';
        word.erase(word.begin());
        if (word.length() == 0)
            return 1;
        bool result = search(board, i + 1, j, word) || search(board, i, j + 1, word) || search(board, i - 1, j, word) || search(board, i, j - 1, word);
        board[i][j] = ch;

        return result;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int pos = 0;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (search(board, i, j, word))
                    return true;
            }
        }
        return false;
    }
};
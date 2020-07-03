class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N = (N % 14 == 0) ? 14 : N % 14;

        vector<int> temp(8, 0);
        while (N > 0)
        {
            for (int i = 1; i < 7; i++)
            {
                temp[i] = (cells[i - 1] == cells[i + 1]) ? 1 : 0;
            }
            cells = temp;
            N--;
        }
        return cells;
    }
};
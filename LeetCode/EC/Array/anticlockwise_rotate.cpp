class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		for (auto vi : matrix)
			reverse(vi.begin(), vi.end());
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
	}
};
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		int n = A.size();
		if (n == 0 || n == 1) return A;

		int idx = 0;

		for (int i = 0; i < n; ++i) {
			if (A[i] % 2 == 0) swap(A[idx++], A[i]);
		}

		return A;
	}
};
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n = A.size();
        int even = -1;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
                swap(A[++even], A[i]);
        }
        return A;
    }
};
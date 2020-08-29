class Solution {
public:
    int finditsindex(const vector<int>&A, const int&value) {
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == value) {return i;}
        }
        return -1;
    }
    vector<int> pancakeSort(vector<int>& A) {
        vector<int>result;
        int index;
        for (int i = A.size(); i > 0; i--) {
            if (A[i - 1] == i) {continue;}
            index = finditsindex(A, i);
            result.push_back(index + 1);
            reverse(A.begin(), A.begin() + index + 1);
            result.push_back(i);
            reverse(A.begin(), A.begin() + i);
        }
        return result;
    }
};
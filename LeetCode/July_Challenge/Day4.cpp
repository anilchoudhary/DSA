class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> vec;
        vec.push_back(1);
        int i = 0, j = 0, k = 0;
        while (vec.size() < n)
        {

            int res = min(vec[i] * 2, min(vec[j] * 3, vec[k] * 5));
            if (find(vec.begin(), vec.end(), res) == vec.end())
            {
                vec.push_back(res);
            }
            if (vec.back() == vec[i] * 2) ++i;
            if (vec.back() == vec[j] * 3) ++j;
            if (vec.back() == vec[k] * 5) ++k;
        }
        return vec[vec.size() - 1];
    }
};
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - 'a';
            v[x] += 1;
        }
        int ans = INT_MAX;
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - 'a';
            if (v[x] == 1)
                return i;
        }
        return -1;
    }
};
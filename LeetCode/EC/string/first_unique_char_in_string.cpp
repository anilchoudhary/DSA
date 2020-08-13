class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, -1);
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - 'a';
            if (v[x] == -1)
                v[x] = i;
            else if (v[x] != -1)
                v[x] = INT_MAX;
        }
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (ans > v[i] && v[i] != -1)
                ans = v[i];
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
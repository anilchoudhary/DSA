class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (n != m)
            return false;
        else
        {
            vector<int> count(26, 0);
            for (int i = 0; i < n; i++)
            {
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }
            for (auto x : count)
            {
                if (x != 0)
                    return false;
            }
            return true;
        }
    }
};
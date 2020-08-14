class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (n != m)
            return false;
        else
        {
            unordered_map<char, int> smap;
            unordered_map<char, int> tmap;
            for (int i = 0; i < n; i++)
            {
                smap[s[i]] += 1;
                tmap[t[i]] += 1;
            }
            if (smap == tmap)
                return true;
            else
                return false;
        }
    }
};
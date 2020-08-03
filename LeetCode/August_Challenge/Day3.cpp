class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v1, v2;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                v1.push_back(tolower(s[i]));
            }
        }
        v2 = v1;
        reverse(v2.begin(), v2.end());
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
        for (int i = 0; i < v1.size(); i++)
            cout << v2[i] << " ";

        if (v1 == v2) return 1;
        else return 0;
    }
};

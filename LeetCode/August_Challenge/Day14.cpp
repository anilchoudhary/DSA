class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> upper_counter(26, 0);
        vector<int> lower_counter(26, 0);

        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                upper_counter[s[i] - 'A'] += 1;
            }
            else
                lower_counter[s[i] - 'a'] += 1;
        }
        int even_count = 0, odd_count = 0, max_odd = INT_MIN, odd_char_1 = 0, odd_flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (upper_counter[i] != 0)
            {
                if (upper_counter[i] % 2 == 0)
                    even_count += upper_counter[i];
                else
                {
                    odd_count += upper_counter[i] - 1;
                    odd_flag = 1;

                }
            }
            if (lower_counter[i] != 0)
            {
                if (lower_counter[i] % 2 == 0)
                    even_count += lower_counter[i];
                else
                {
                    odd_count += lower_counter[i] - 1;
                    odd_flag = 1;

                }
            }
        }
        int ans = 0;
        if (odd_flag)
            ans = even_count + odd_count + 1;
        return ans;
    }
};
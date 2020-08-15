class Solution {
public:
    int strStr(string haystack, string needle) {
        if ((haystack.length() == 0 && needle.length() == 0) || needle.length() == 0)
            return 0;
        for (int i = 0; i < haystack.length(); i++)
        {
            int temp = i;
            for (int j = 0; j < needle.length(); j++)
            {
                if (haystack[i] == needle[j] && j == needle.length() - 1)
                    return i - needle.length() + 1;
                else if (haystack[i] == needle[j])
                    i++;
                else
                    break;
            }
            i = temp;
        }
        return -1;
    }
};
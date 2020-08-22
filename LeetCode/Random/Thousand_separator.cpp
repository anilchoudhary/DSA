class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0)
            return "0";
        string result = "";
        int i = 0;
        while (n > 0)
        {
            int rem = n % 10;
            i++;
            result += to_string(rem);
            n /= 10;
            if (i % 3 == 0 && n != 0)
                result += '.';

        }
        reverse(result.begin(), result.end());
        return result;
    }
};
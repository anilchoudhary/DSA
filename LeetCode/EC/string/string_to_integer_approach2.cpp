class Solution {
public:
    int myAtoi(string str) {
        int i = 0, flag = 0;
        long long int result = 0;

        while (str[i] == ' ')
            i++;
        if (isalpha(str[i]))
            return 0;
        else if (str[i] == '-')
        {
            flag = 1;
            i++;
        }
        else if (str[i] == '+')
            i++;
        for (; i < str.length(); i++)
        {
            if (!isdigit(str[i]))
                break;
            else
            {
                if (result >  INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7)) {
                    if (flag == 1) return INT_MIN;
                    else return INT_MAX;
                }
                result = result * 10 + str[i] - '0';
            }

        }
        if (flag == 1)
            result = -1 * result;
        return result;
    }
};
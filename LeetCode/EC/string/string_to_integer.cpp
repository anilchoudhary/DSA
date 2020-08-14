class Solution {
public:
    int myAtoi(string str) {
        int i = 0, flag = 0;
        string ans = "";
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
                ans += str[i];
            }

        }
        // cout<<ans;
        // reverse(ans.begin(), ans.end());
        // cout<<ans<<endl;
        long long int result = 0;
        for (int j = 0; j < ans.length(); j++)
        {
//             if(result > INT_MAX/10 || ((result == INT_MAX/10) && (ans[j] - '0')>7))
//             {

//                 if(flag == 1)
//                     return INT_MIN;
//                 else
//                     return INT_MAX;
//             }
            if (result >  INT_MAX / 10 || (result == INT_MAX / 10 && ans[j] - '0' > 7)) {
                if (flag == 1) return INT_MIN;
                else return INT_MAX;
            }
            result = result * 10 + ans[j] - '0';
            // cout<<ans[j]<<" ";
            // cout<<result<<endl;

        }


        if (flag == 1)
            result = -1 * result;
        // if(result > INT_MAX)
        //     return INT_MAX;
        // else if(result < INT_MIN)
        //     return INT_MIN;

        return result;
    }
};
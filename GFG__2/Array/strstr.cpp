/* The function should return position where the target string
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {

        ans = 0;
        if (s[i] == x[0])
            for (int j = 0; j < x.size(); j++)
            {
                if (s[i + j] == x[j])
                    ans++;
            }
        if (ans == x.size())
        {
            return i;
        }
    }
    return -1;
}
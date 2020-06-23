#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    s1 = "gfgf";
    s2 = "ggff";

    int n = s1.length();
    int m = s2.length();

    if (n != m)
    {
        cout << "no" << endl;
        return 0;
    }
    int ch[256] = {0};
    for (int i = 0; i < n; i++)
    {
        ch[s1[i]]++;
        ch[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (ch[i] != 0)
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}

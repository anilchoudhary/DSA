#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char ch = str[0];
    int k = 1;
    int m = 1;
    for(unsigned int i=1;i<str.size();i++)
    {
        if(ch==str[i])
            k++;
        else
        {
            m = max(m,k);
            k=1;
            ch=str[i];
        }
    }
    cout<<max(k,m);
    return 0;
}

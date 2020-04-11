#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 35;
    int ps =1,cs=1;
    for(int i=2;i*i<=n;i++)
    {
        cs = i*i;
        if(cs>n)
        {
            break;
        }
        ps = i;
    }
    cout<<ps<<endl;
    return 0;

}

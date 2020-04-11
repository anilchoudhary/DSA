#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 35;
    int ans;
    if(x==0||x==1)
        return x;
    int l=1,h=x;
    while(l<=h)
    {
        int m = (l+h)/2;
        if(m*m == x)
            return m;
        if(m*m<x)
        {
            l=m+1;
            ans = m;
        }
        else
            h=m-1;
    }
    cout<<ans<<endl;

    return 0;

}

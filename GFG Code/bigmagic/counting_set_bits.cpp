#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15;
    int ans = 0;
    while(n>0)
    {
        n = n&(n-1);
        ans++;
    }
    cout<<ans;
    return 1;
}

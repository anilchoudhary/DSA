#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
    if(b==0)
        return a;
    else if(a>b)
        return gcd(b, a%b);
    else
        return gcd(a, b%a);
}

int main()
{
    int a = 16;
    int b = 10;
    int ans = gcd(a,b);
    cout<<ans;
    return 0;
}

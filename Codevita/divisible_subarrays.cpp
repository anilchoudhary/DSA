#include<bits/stdc++.h>
using namespace std;

long long int a[1000005];
long long int fre[1000005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        memset(fre, 0, sizeof(fre));
        fre[0] = 1;
        long long int sum = 0;
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
            sum %= n;
            sum = (sum+n)%n;
            fre[sum]++;
        }
        long long int ans=0;
        for(long long int i=0;i<n;i++)
        {
            long long int m = fre[i];
            ans += m*(m-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

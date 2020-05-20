#include<bits/stdc++.h>
typedef long int ll;
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        ll n,m,q;
		cin>>n>>m>>q;
        ll N[n],M[m];
        while(q--)
		{
            ll x,y;
            cin>>x>>y;
            --x;--y;
            N[x]++;
            M[y]++;
        }
        ll En=0,On=0,Em=0,Om=0;
        for(ll i=0;i<n;i++){
            if(N[i]%2!=0) On++;
            else En++;
        }for(ll i=0;i<m;i++){
            if(M[i]%2!=0) Om++;
            else Em++;
        }
        ll s = (En*Om)+(Em*On);
        cout<<s<<"\n";
    }
    return 0;
}

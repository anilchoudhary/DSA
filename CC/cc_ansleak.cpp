#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define deb(x)          cout << #x << "=" << x << endl
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define fo(i,n)         for(i=0;i<n;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define MAX 10

void anil_()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int i, j, k, p, q, r, x, y, u, v, n, m;
    anil_();
    w(t)
    {
        cin >> n >> m >> k;
        int arr[n * k];
        fo(i, n * k)
        {
            cin >> arr[i];
        }
        int x = 0, sum = 0; u = 1;
        fo(i, n)
        {
            cout << u << " ";
            u++;
            if (u == m + 1)
                u = 1;
        }
    }
    return 0;
}

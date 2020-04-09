// Print all pairs in an array  whose sum is X.

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
#define deb(x) 			cout << #x << "=" << x << endl
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define fo(i,n) 		for(i=0;i<n;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define MAX 10

void anil_()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void findPairs(int *arr, int size, int sum)
{
	int index, temp;
	int hash[MAX] = {0};

	for (index = 0; index < size; index++)
	{
		temp = sum - arr[index];
		if (temp >= 0 && hash[temp] == 1)
			cout << "Pair with given sum is: " << arr[index] << " " << temp;
		hash[arr[index]] = 1;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int i, j, k, p, q, r, x, y, u, v, n, m;
	anil_();
	mk(arr, 5, int);
	fo(i, n)
	{
		arr[i] = i;
	}
	findPairs(arr, 5, 5);



	return 0;
}
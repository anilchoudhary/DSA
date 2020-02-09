#include <bits/stdc++.h>
using namespace std;

int fastExpo(int a, long long n, int mod){
//	(a^n)%mod
	int ans = 1;
	while(n>=1){
		if(n%2==0){
			a = (1LL * a * a) % mod;
			n = n/2;
		}
		else{
			ans = (1LL * ans * a) % mod;
			n--;
		}
	}
	return ans;
}

int main()
{
	cout<<fastExpo(2,10,1000000009);
}

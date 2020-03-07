#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int even=0,count=0;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			count = __builtin_popcount(arr[i]);
	    	if(count%2==0)
	    		even++;
	    	count =0;
		}
		int  arr2[q];
		for(int i=0;i<q;i++)
		{
			cin>>arr2[i];
			count=__builtin_popcount(arr2[i]);
			if(count%2==0)
				cout<<even<<" "<<n-even<<"\n";
			else
				cout<<n-even<<" "<<even<<"\n";
			count = 0;			
		}
	}
	return 0;
}

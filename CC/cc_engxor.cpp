#include<bits/stdc++.h>
using namespace std;
int n,q;

void answer(long long int ans[])
{
	int binaryNum[n][32];
	for(int i=0;i<n;i++)
	 for(int j=0;j<32;j++)
	 	binaryNum[i][j] = 0;
	int even = 0,c1=0,odd=0;
	for(int i=0;i<n;i++)
	{
		int x = 0;
		while(ans[i]>0)
		{
			binaryNum[i][x] = ans[i]%2;
			ans[i] /= 2;
			x++;
		}
		for(int j = x-1;j>=0;j--)
		{
//			cout<<binaryNum[i][j]<<" ";
			if(binaryNum[i][j]==1)
				c1++;
		}
		if(c1%2==0)
			even++;	
			c1=0;
//		cout<<endl;	
		
	}
	cout<<even<<" "<<n-even<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>q;
		long long int arr[n];
		long long int ans[n];
		for(int i=0;i<n;i++)
			ans[i] = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int  arr2[q];
		for(int i=0;i<q;i++)
		{
			cin>>arr2[i];
		}
		for(int i=0;i<q;i++)
		{
			for(int j=0;j<n;j++)
			{
				ans[j] = arr[j] ^ arr2[i];
			}
			answer(ans);
		}
	}
	return 0;
}

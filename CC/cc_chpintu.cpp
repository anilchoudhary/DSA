#include<bits/stdc++.h>
using namespace std;
int farr[51], parr[51], arr[51], xarr[51];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ans = INT_MAX;
//		int xarr[m],arr[m];
		for(int i=0;i<m;i++)
		{
			arr[i]= 0;
			xarr[i]=0;
		}
//		for(int i=0;i<m;i++)
//		cout<<arr[i]<<endl;
		for(int i=0;i<n;i++)
			cin>>farr[i];
		for(int i=0;i<n;i++)
			cin>>parr[i];
		for(int i=0;i<n;i++)
		{
			arr[farr[i]-1]	= arr[farr[i]-1] + parr[i] ;
			xarr[farr[i]-1] = xarr[farr[i]-1] + 1;
//			cout<<arr[farr[i]-1]<<endl;
		}
//		for(int i=0;i<m;i++)
//			cout<<arr[i]<<" ";
//		sort(arr,arr+m);
//		for(int i=0;i<m;i++)
//		cout<<arr[i]<<endl;
		for(int i=0;i<m;i++)
		{
			if((xarr[i]!=0))
				{
					if(arr[i]<ans)
						ans = arr[i];
				}
		}
		cout<<ans<<endl;
	}
	return 0;
}

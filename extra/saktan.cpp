#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k;
		cin>>n>>k;
		long int a,b,i,arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		if(n%2!=0)
		{
			if(k>n/2)
			{
				arr[(n-1)/2] = 0;
			}
		}
		
		k %= (3*n);
		
		for(i=0;i<k;i++)
		{
		    a=arr[i%n];
		    b=arr[n-(i%n)-1];
		    arr[i%n]=a^b;
		}
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
	return 0;
}

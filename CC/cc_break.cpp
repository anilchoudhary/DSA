#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,s;
	cin>>t>>s;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		long long int arr1[n],arr2[n];
		for(int i =0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<n;i++)
			cin>>arr2[i];
		sort(arr1, arr1+n);
		sort(arr2, arr2+n);
		
		for(int i=0;i<n;i++)
		{
			if(arr2[i]<=arr1[i])
			{
				flag = 1;
				break;
			}
		}
		
		map<int,int> mp;
		map<int,int> :: iterator it;
		mp.insert({arr1[0],1});
		
		if(flag == 0)
		{
			for(int i=0;i<n;i++)
			{
				it = mp.find(arr1[i]);
				if(it == mp.end())
				{
					flag = 1;
					break;
				}
				else
				{
					mp.insert({arr2[i],1});
					mp.insert({arr1[i],1});
				}
			}
		}
		
		if(flag == 1)
		cout<<"NO"<<"\n";
		else
		cout<<"YES"<<"\n";
			
	}
	return 0;	
}

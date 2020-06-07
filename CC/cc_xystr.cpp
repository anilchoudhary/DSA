#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGES
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		#endif

	int t;
	cin>>t;
	while(t--)
	{
	string arr;
    cin>>arr;
	int count =0;
	for(int i =0;i<arr.length()-1;i++)
	{
	if((arr[i] == 'x' && arr[i+1] == 'y' ))
	{
	count++;
	arr[i] = 'z';
	arr[i+1] = 'z';
	}	
	else if((arr[i] == 'y' && arr[i+1] == 'x'))
	{
	count++;
	arr[i] = 'z';
	arr[i+1] = 'z';
	}
	}
	cout<<count<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int s[1000];

void build_sum_array(int a[], int n)
{
	s[1] = a[1];
	for(int i=2;i<=n;i++)
	{
		s[i] = s[i-1] + a[i];
	}
//	for(int i=1;i<=n;i++)
//		cout<<s[i]<<endl;
}

long long queries(int x, int y)
{
	return (s[y]-s[x-1]);
}

int main()
{
	int n,x,y;
	cout<<"enter size of the array(less than 1000): ";
	cin>>n;
	int arr[n],i=0;
	cout<<"enter elements in array: ";
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	build_sum_array(arr,n);
	cout<<"enter starting and ending point of sub-array: ";
	cin>>x>>y;
	cout<<"sum of sub array: ";
	cout<<queries(x,y);
	return 0;
}

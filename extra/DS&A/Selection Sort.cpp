#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x=0,min;
	cout<<"Enter size of array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		min = arr[i];
		for(int j=i;j<n;j++)
		{
			if(min>arr[j])
				{
					min = arr[j];
					x=j;
				}
		}
		arr[x] = arr[i];
		arr[i] = min;
	}
	cout<<"Sorted Array: ";
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
	
}

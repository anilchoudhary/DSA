#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int p,int r)
{
	int x = arr[r];
	int i = p;
	int temp;
	for(int j=p;j<r;j++)
	{
		if(arr[j]<=x)
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i++;
		}
	}	
		temp = arr[r];
		arr[r] = arr[i];
		arr[i] = temp;
	return (i);
}

void quick_sort(int *arr, int p,int r)
{
	if(p<r)
	{
		int q = partition(arr , p , r);
		quick_sort(arr,p,q-1);
		quick_sort(arr,q+1,r);
	}
}
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quick_sort(arr,0,n-1);
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

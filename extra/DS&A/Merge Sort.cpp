#include<bits/stdc++.h>
using namespace std;

merge(int arr[],int p,int m,int q)
{
	int n1 = m - p + 2;
	int n2 = q - m + 1;
	int L[n1];
	int R[n2];
	for(int i=0;i<(n1-1);i++)
	{
		L[i] = arr[p+i];
	}
	for(int j=0;j<(n2-1);j++)
	{
		R[j] = arr[m+j+1];
	}
	L[n1-1] = R[n2-1] = INT_MAX;
	int i =0,j=0;
	for(int k=p;k<=q;k++)
	{
		if(L[i]<=R[j])
			{
				arr[k] = L[i]; i++;
			}
		else
		{
			arr[k] = R[j]; j++;
		}
	}
}

void merge_sort(int arr[],int p,int q)
{
	if(q>p)
	{
		int m = (q+p)/2;
		merge_sort(arr,p,m);
		merge_sort(arr,m+1,q);
		merge(arr,p,m,q);
	}
	return;
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
	merge_sort(arr,0,n-1);
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
	

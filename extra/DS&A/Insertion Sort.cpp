#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,j=0;
	cout<<"Enter size of array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<n;i++)
	{
		int temp = arr[i];
		j = i-1;
		while(temp<arr[j]&&j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	cout<<"Sorted Array: ";
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
}

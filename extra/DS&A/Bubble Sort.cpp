#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=1;
	cout<<"Enter size of array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(arr[j]<arr[j-1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				flag = 0;
			}
		}
		if(flag==1)
			break;
		flag = 1;
	}
	cout<<"Sorted Array: ";
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
}

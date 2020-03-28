#include<bits/stdc++.h>
using namespace std;

int n = 5;
int arr[] = {5,2,1,0,3};
int leftmax[100], rightmax[100];

void left(int arr[], int n)
{
	int max = arr[0];
	for(int i=0;i<n;i++)
	{
		if(max <= arr[i])
			max = arr[i];
		leftmax[i] = max;	
	}	
//	for(int i =0 ;i<n;i++)
//		cout<<leftmax[i]<<" ";
//	cout<<endl;
}

void right(int arr[], int n)
{
	int max = arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		if(max <= arr[i])
			max = arr[i];	
		rightmax[i] = max;
	}
//	for(int i =0 ;i<n;i++)
//		cout<<rightmax[i]<<" ";
//	cout<<endl;
}

void trap(int arr[], int leftmax[], int rightmax[] )
{
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		ans = ans + min(rightmax[i],leftmax[i]) - arr[i];
	}
	cout << ans << endl;
}

int main()
{
	left(arr, n);
	right(arr, n);
	trap(arr, leftmax, rightmax);
	return 1;
}

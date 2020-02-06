#include<iostream>
using namespace std;

int max_sum_subArray(int a[], int n)
{
	int ans = a[0],sum = 0;
	for(int i = 0;i < n; i++)
	{
		sum += a[i];
		if(sum>ans)
			ans = sum;
		if(sum<0)
			sum = 0;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements: ";
	for(int i = 0;i < n; i++)
	{
		cin>>a[i];
	}
	cout<<"Maximum sum subArray: ";
	cout<<max_sum_subArray(a,n);
}

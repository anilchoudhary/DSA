#include<iostream>
using namespace std;
int l,r,ll;

int max_sum_subArray(int a[], int n)
{
	int ans = a[0],sum = 0;
	for(int i = 0;i < n; i++)
	{
		sum += a[i];
		if(sum>ans)
		{
			ans = sum;
			ll = l;
			r=i+1;	
		}
		if(sum<0)
		{
			sum = 0;
			l=i+2;
			r=0;
		}
//		r=++l;	
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
	cout<<max_sum_subArray(a,n)<<endl;
	cout<<"left: "<<ll<<endl;
	cout<<"right: "<<r<<endl;
}

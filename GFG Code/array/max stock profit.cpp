#include<bits/stdc++.h>
using namespace std;

int lowminima[100], highminima[100];

void profit(int arr[], int n)
{
	int k = 0, l = 0;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if(arr[i+1]>arr[i])
				lowminima[k++] = arr[i];
		}
		else if(i==n-1)
		{
			if(arr[i-1]<arr[i])
				highminima[l++] = arr[i];
		}
		else
		{
			if((arr[i-1]>arr[i]) && (arr[i+1]>arr[i]))
				lowminima[k++] = arr[i];
			else if((arr[i-1]<arr[i]) && (arr[i+1]<arr[i]))
				highminima[l++] = arr[i];
		}
	}
	int ans = 0;
	for (int i = 0;i<l;i++)
	{
		ans = ans + (highminima[i] - lowminima[i]);
//		cout<<highminima[i]<<" - "<<lowminima[i];
//		cout<<endl;
		
	}
	cout<<ans<<endl;
}

int main()
{
	int n = 5;
	int arr[] = {1,5,3,8, 12};
	profit(arr, n);
}

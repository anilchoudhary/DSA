#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, nn, k, count = 0;
		cin >> n >> k;
//		n = nn;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			char tmp;
			cin >> tmp;
			if (tmp == 'H' )
				arr[i] = 1;
			else
				arr[i] = -1;
		}
//		for(int i =0;i<n;i++)
//			cout<<endl<<arr[i]<<" ";
//		cout<<endl;
		for (int i = 0; i < k; i++)
		{
			if (arr[n - 1] == 1)
			{
				n -= 1;
				for (int j = 0; j < n; j++)
				{
					arr[j] *= -1;
				}
			}
			else
				n -= 1;
//			for(int Z =0;Z<n;Z++)
//			cout<<endl<<arr[Z]<<" ";
//		cout<<endl;
		}
//		cout<<endl<<n<<endl;
//		for(int i =0;i<n;i++)
//			cout<<endl<<arr[i]<<" ";
//		cout<<endl;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 1)
				count++;
		}
		cout << count << endl;
	}
}

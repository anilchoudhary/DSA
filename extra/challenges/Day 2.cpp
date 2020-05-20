#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=10;
	int a,b;
	a = n/2;
	b = n/2 + 1;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if((a <= j) && (j <= b))
			{
				cout<<"*"<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		if(i % 2 == 0)
		{
			a--;
			b++;
		}
		cout<<endl;
	}
}

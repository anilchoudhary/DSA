#include<bits/stdc++.h>
using namespace std;
long long int total;

int getProfit(int p[])
{
	int t_a = 0, pr = 100;
	sort(p,p+4);
	for(int i=3;i>=0;i--)
	{
		if(p[i]==0)
			t_a -= 100;
		else
		{
			t_a += pr*p[i];
			pr -= 25;
		}
	}
	return t_a;
}

int main()
{
	int  t,y; char x;
	cin>>t;
	while(t--)
	{
		int n,t_a=INT_MIN;
		cin>>n;
		int mat[4][4];
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				mat[i][j]=0;
		while(n--)
		{
			cin>>x>>y;
			mat[int(x)-65][(y/3)-1] += 1;
		}
//		int p[4];
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if(j!=i)
					for(int k=0;k<4;k++)
						if(k!=i && k!=j)
							for(int l=0;l<4;l++)
								if(l!=i && l!=j && l!=k)
								{
									int p[4] = {0,0,0,0};
									p[0] = mat[0][i];
									p[1] = mat[1][j];
									p[2] = mat[2][k];
									p[3] = mat[3][l];
									t_a = max(t_a, getProfit(p));
								}
								cout<<t_a<<endl;
								total += t_a;
	}
	cout<<total<<endl;
	return 0;
}

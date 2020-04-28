#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
LL m = 100001;
vector<LL> sq(m + 1, 0);
void SQ(LL N) {
	//cout<<"x "<<N<<endl;
	vector<LL> a(m + 1, 0);
	LL i, t, j, k, n, r = 1, s = 1, c = 0;
	for (i = 0; i < m + 1; i++)
		a[i] = i;
	for (j = 2; j <= m; j++)
	{	if (a[j] == j)
		{
			for (k = j * j; k <= m; k += j)
			{	if (a[k] == k)
					a[k] = j;
			}
		}
	}

	for (i = 1; i <= N; i++)
	{	r = 1, s = 1;
		c = 0;
		n = i;
		while (n > 0)
		{
			if (r == a[n])
			{
				c++;
				if (n == 1)
					break;

			}
			else
			{
				if (c % 2 == 1)
					s = s * r;
				c = 1;
				r = a[n];
				if (n == 1)
					break;
			}
			n = n / a[n];

		}
		sq[i] = s;
		//cout<<s<<endl;
	}

}

int main()
{	double z;
	LL t, i, n, m, j, c, d, h, v, maxx, maxy, co, k;
	scanf("%lld", &t);
	for (i = 0; i < t; i++)
	{	c = 0;
		d = 0;
		h = 0;
		v = 0;
		co = 0;
		maxx = 0;
		maxy = 0;
		vector <LL> w(4, 0), g(4, 0);
		scanf("%lld %lld", &n, &m);
		vector <LL> X(n, 0), Y(m, 0);
		for (j = 0; j < n; j++)
		{
			scanf("%lld", &X[j]);
			if (X[j] > 0)
			{
				c++;
				if (X[j] > maxx)
					maxx = X[j];
			}
			else if (X[j] < 0)
			{
				d++;
				if ((X[j] * -1) > maxy)
					maxy = (X[j] * -1);
			}
			else
			{
				co = co + (n - 1) * m;
			}
			//cout<<co<<endl;
		}
		w[0] = maxx;
		w[1] = maxy;
		g[0] = maxx;
		g[1] = maxy;
		vector <LL> xp(c, 0), xp1(maxx + 1, 0), xn(d, 0), xn1(maxy + 1, 0);
		for (j = 0; j < n; j++)
		{
			if (X[j] > 0)
			{
				xp1[X[j]] = 1;
				xp[h] = X[j];
				h++;
			}
			if (X[j] < 0)
			{
				xn1[(X[j] * -1)] = 1;
				xn[v] = X[j] * -1;
				v++;
			}
		}
		c = 0, d = 0, h = 0, v = 0, maxx = 0, maxy = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%lld", &Y[j]);
			if (Y[j] > 0)
			{
				c++;
				if (Y[j] > maxx)
					maxx = Y[j];
			}
			else if (Y[j] < 0)
			{
				d++;
				if ((Y[j] * -1) > maxy)
					maxy = (Y[j] * -1);
			}
			else
				co = co + (m - 1) * n;
			//cout<<co<<endl;
		}
		w[2] = maxx;
		w[3] = maxy;
		g[2] = maxx;
		g[3] = maxy;
		sort(w.begin(), w.end());
		SQ(w[3]);
		vector<LL> yp1(maxx + 1, 0), yn1(maxy + 1), yp(c, 0), yn(d, 0);
		for (j = 0; j < m; j++)
		{
			if (Y[j] > 0)
			{
				yp1[Y[j]] = 1;
				yp[h] = Y[j];
				h++;
			}
			else if (Y[j] < 0)
			{
				yn1[(Y[j] * -1)] = 1;
				yn[v] = Y[j] * -1;
				v++;
			}
		}
		for (j = 0; j < xn.size(); j++)
		{
			for (k = sq[xn[j]]; k <= g[0]; k += sq[xn[j]])
			{	//cout<<sq[xn[j]]<<" "<<xp1.size()<<endl;
				if (xp1[k] == 1)
				{
					z = sqrt(k * xn[j]);
					if (z == floor(z))
					{	//cout<<z<<endl;
						if (z <= yp1.size())
						{
							if (yp1[z] == 1 )
								co++;
						}
						if (z <= yn1.size())
						{
							if (yn1[z] == 1 )
								co++;
						}
					}
				}
			}

		}
		for (j = 0; j < yn.size(); j++)
		{	//cout<<"X "<<sq[yn[j]]<<endl;

			for (k = sq[yn[j]]; k <= g[2]; k += sq[yn[j]])
			{
				if (yp1[k] == 1)
				{
					z = sqrt(k * yn[j]);
					if (z == floor(z))
					{	//cout<<z<<endl;
						if (z <= xp1.size())
						{
							if (xp1[z] == 1  )
								co++;
						}
						if (z <= xn1.size())
						{
							if (xn1[z] == 1 )
								co++;
						}
					}
				}
			}

		}
		cout << co << endl;
	}
	return 0;
}

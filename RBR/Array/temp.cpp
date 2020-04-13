#include <bits/stdc++.h>
using namespace std;

#define MOD 			998244353
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define deb(x) 			cout << #x << "=" << x << endl
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define fo(i,n) 		for(i=0;i<n;i++)

int gcdExtended(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}

vector<vi> postfix(string s)
{

	int bracket = 0;
	vi number;
	int num;
	num = 748683265;
	for (int i = 0; i < 4; i++)number.pb(num);
	vector<vi > ans;
	vi R, And, Xr;
	R.pb(1); And.pb(2); Xr.pb(3);
	stack<char> buf;
	for (int  n  = 0 ; n < s.size(); n++)
	{
		if (s[n] == '#')
		{
			ans.pb(number);
			continue;
		}
		if (s[n] == ')')
		{
			while (buf.top() != '(')
			{
				if (buf.top() == '|')
				{
					ans.pb(R);
				}
				else if (buf.top() == '&')
				{
					ans.pb(And);
				}
				else if (buf.top() == '^')
				{
					ans.pb(Xr);
				}
				buf.pop();
			}
			buf.pop();
		}
		else if (s[n] == '(' || buf.empty() || buf.top() == '(')
		{
			buf.push(s[n]);
		}
		else
		{
			if (buf.top() == '|')
			{
				ans.pb(R);
			}
			else if (buf.top() == '&')
			{
				ans.pb(And);
			}
			else if (buf.top() == '^')
			{
				ans.pb(Xr);
			}
			buf.pop();
			buf.push(s[n]);
		}
	}
	while (!buf.empty())
	{
		if (buf.top() == '|')
			ans.pb(R);
		else if (buf.top() == '&')
			ans.pb(And);
		else if (buf.top() == '^')
			ans.pb(Xr);
		buf.pop();
	}
	return ans;
}

int  Add(int  a, int   b)
{
	return (a + b) % MOD;
}

int  mul(int  a, int  b)
{
	return (a * b) % MOD;
}

vi CalcOr(vi a, vi b)
{
	vi ans(4);
	int  buf;
	int  term1;
	ans[0] = (a[0] * b[0]) % MOD;
	term1 = b[0];
	for (int  n = 1; n < 4; n++)
	{
		term1 = Add(term1, b[n]);
	}
	term1 = mul(term1, a[1]);

	int  term2 = a[0];
	term2 = Add(term2, a[2]);
	term2 = Add(term2, a[3]);
	term2 = mul(term2, b[1]);

	int  term3 = mul(a[2], b[3]);

	int  term4 = mul(a[3], b[2]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[1] = buf;

	term1 = mul(a[0], b[2]);
	term2 = mul(a[2], b[0]);
	term3 = mul(a[2], b[2]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);

	ans[2] = buf;

	term1 = mul(a[0], b[3]);
	term2 = mul(a[3], b[0]);
	term3 = mul(a[3], b[3]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);

	ans[3] = buf;

	return ans;
}


vi CalcAnd(vi a, vi b)
{
	vi ans(4);
	int  buf;
	int  term1;
	ans[1] = mul(a[1], b[1]);

	term1 = b[0];
	for (int  n = 1; n < 4; n++)
	{
		term1 = Add(term1, b[n]);
	}
	term1 = mul(term1, a[0]);

	int  term2;
	term2 = a[1];
	term2 = Add(term2, a[2]);
	term2 = Add(term2, a[3]);
	term2 = mul(term2, b[0]);

	int  term3;
	term3 = mul(a[2], b[3]);

	int  term4;
	term4 = mul(a[3], b[2]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[0] = buf;

	term1 = mul(a[1], b[2]);
	term2 = mul(a[2], b[1]);
	term3 = mul(a[2], b[2]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);

	ans[2] = buf;

	term1 = mul(a[1], b[3]);
	term2 = mul(a[3], b[1]);
	term3 = mul(a[3], b[3]);

	buf = term1;
	buf = Add(term1, term2);
	buf = Add(buf, term3);

	ans[3] = buf;

	return ans;
}

vi CalcXor(vi a, vi b)
{
	int  buf;
	int  term1, term2, term3, term4;
	vi ans(4);

	term1 = mul(a[0], b[0]);
	term2 = mul(a[1], b[1]);
	term3 = mul(a[2], b[2]);
	term4 = mul(a[3], b[3]);
	buf = term1;
	buf = Add(buf, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[0] = buf;

	term1 = mul(a[0], b[1]);
	term2 = mul(a[1], b[0]);
	term3 = mul(a[2], b[3]);
	term4 = mul(a[3], b[2]);
	buf = term1;
	buf = Add(buf, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[1] = buf;


	term1 = mul(a[0], b[2]);
	term2 = mul(a[1], b[3]);
	term3 = mul(a[2], b[0]);
	term4 = mul(a[3], b[1]);
	buf = term1;
	buf = Add(buf, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[2] = buf;

	term1 = mul(a[0], b[3]);
	term2 = mul(a[1], b[2]);
	term3 = mul(a[2], b[1]);
	term4 = mul(a[3], b[0]);
	buf = term1;
	buf = Add(buf, term2);
	buf = Add(buf, term3);
	buf = Add(buf, term4);

	ans[3] = buf;

	return ans;
}


int  CalcInv(int  a)
{
	int  x, y;
	int  gcd = gcdExtended(a, MOD, &x, &y);
	while (x < 0) x += MOD;
	return x % MOD;
}

void anil_()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	anil_();
	int  t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int  num = 0;
		vector<vi> pfix = postfix(s);
		stack<vi> st;
		vi ele;
		for (int  i = 0; i < pfix.size(); i++)
		{
			ele = pfix[i];
			if (ele.size() == 4)
			{
				st.push(ele);
			}
			else if (ele.size() == 1)
			{
				vi a, b, c;
				a = st.top();
				st.pop();
				b = st.top();
				st.pop();
				if (ele[0] == 1)
					c = CalcOr(a, b);
				if (ele[0] == 2)
					c = CalcAnd(a, b);
				if (ele[0] == 3)
					c = CalcXor(a, b);
				st.push(c);
			}
		}
		ele = st.top();
		vi ans(4);
		for (int  i = 0; i < 4; i++)
		{
			ans[i] = ((ele[i])) % MOD;
			cout << ans[i];
		}
		cout << "\n";
	}
	return 0;
}

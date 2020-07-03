#include<bits/stdc++.h>
using namespace std;

int cut_rope(int n, int a, int b, int c)
{

	if (n == 0)
		return 0;
	else if (n < 0)
		return -1;
	int l = cut_rope(n - a, a, b, c);
	int m = cut_rope(n - b, a, b, c);
	int k = cut_rope(n - c, a, b, c);

	int ans = max(max(l, m), k);
	if (ans == -1) return -1;
	return 1 + ans;
}

int main()
{
	int rope_length = 10;
	int a = 7, b = 7, c = 4;
	cout << cut_rope(rope_length, a, b, c) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count_a = 0;
	int n = s.length();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'a')
			count_a++;
	}
	if (count_a > n / 2)
		cout << n;
	else
		cout << (count_a * 2 - 1);
	cout << endl;
	return 0;
}
// A O(n) solution for finding rank of string
#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256

int fact(int n)
{
	if (n <= 1)
		return 1;
	return n * fact(n - 1);
}

int lexRank(string str)
{
	int rank = 1;
	int n = str.length();
	int mul = fact(n);
	int count[MAX_CHAR] = {0};
	for (int i = 0; i < n; i++)
		count[str[i]]++;
	for (int i = 1; i < MAX_CHAR; i++)
		count[i] += count[i - 1];
	for (int i = 0; i < n; i++)
	{
		mul = mul / (n - i);
		rank += count[str[i] - 1] * mul;
		for (int j = str[i]; j < MAX_CHAR; j++)
			count[j]--;
	}
	return rank;
}

int main()
{
	char str[] = "string";
	cout << lexRank(str) << endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

bool areSame(int a[], int b[])
{
	for (int i = 0; i < 256; i++)
	{
		if (a[i] != b[i])
			if (a[i] == 0 || b[i] == 0)
				return 0;
	}
	return 1;
}

bool is_match(string text, string pattern)
{
	int n = text.length();
	int m = pattern.length();
	int counttextw[256] = {0};
	int countptrw[256] = {0};
	for (int i = 0; i < m; i++)
	{
		counttextw[text[i]]++;
		countptrw[pattern[i]]++;
	}
	for (int i = m ; i < n; i++)
	{
		if (areSame(counttextw, countptrw))
			return 1;

		counttextw[text[i]]++;
		counttextw[text[i - m]]--;
	}
	return 0;
}

int main()
{
	string text = "xxgfregeksforgeeks";
	string pattern = "egeks";
	if (is_match(text, pattern))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
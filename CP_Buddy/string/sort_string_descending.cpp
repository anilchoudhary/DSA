#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "anilChoudhary";
	int count_char[26] = { 0 };
	int n = str.length();
	char ch;
	for (int i = 0; i < n; i++)
	{
		ch = tolower(str[i]);
		count_char[ch - 'a']++;
	}
	for (int i = 25; i >= 0; i--)
	{
		for (int j = 0; j < count_char[i]; j++)
			cout << (char)('a' + i);
	}
	cout << endl;
	return 0;
}
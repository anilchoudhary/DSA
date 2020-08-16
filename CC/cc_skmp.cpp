#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
	{
		string text;
		string pattern;
		cin >> text >> pattern;
		string result = "";
		vector<int> text_freq(26, 0);

		for (int i = 0; i < text.length(); i++)
		{
			int x = text[i] - 'a';
			text_freq[x]++;
		}
		for (int i = 0; i < pattern.length(); i++)
		{
			int x = pattern[i] - 'a';
			text_freq[x]--;
		}
		int y = pattern[0] - 'a';
		for (int i = 0; i <= y; i++)
		{
			for (int j = 0; j < text_freq[i]; j++)
				result += (char)(i + 97);
		}
		result += pattern;
		for (int i = y + 1; i < 26; i++)
		{
			for (int j = 0; j < text_freq[i]; j++)
				result += (char)(i + 97);
		}
		string result1 = "";
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < text_freq[i]; j++)
				result1 += (char)(i + 97);
		}
		result1 += pattern;
		for (int i = y; i < 26; i++)
		{
			for (int j = 0; j < text_freq[i]; j++)
				result1 += (char)(i + 97);
		}
		// cout << result << endl;
		cout << min(result, result1) << endl;
	}
	return 0;
}
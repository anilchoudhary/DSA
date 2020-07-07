#include<bits/stdc++.h>
using namespace std;

int is_anagram(string s1, string s2)
{
	unordered_map <char, int> mymap;
	if (s1.length() != s2.length())
		return 0;
	else
	{
		for (int i = 0; i < s1.length(); i++)
		{
			mymap[s1[i]]++;
			mymap[s2[i]]--;
		}
		for (int i = 0; i < s1.length(); i++)
		{
			if (mymap[s1[i]] != 0)
				return 0;
		}
		return 1;
	}
}

bool is_match(string text, string pattern)
{
	int n = text.length();
	int m = pattern.length();
	string temp = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < m + i; j++)
		{
			temp += text[j];
		}
		// cout << temp << " ";
		if (is_anagram(pattern, temp))
			return 1;
		temp = "";
	}
	return 0;
}

int main()
{
	string text = "geksforgeeks";
	string pattern = "egek";
	if (is_match(text, pattern))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
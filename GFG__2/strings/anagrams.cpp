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

int main()
{
	string s1 = "geeksf";
	string s2 = "eegksd";
	int x = is_anagram(s1, s2);
	if (x)
		cout << "yes, anagram!";
	else
		cout << "no, not anagram.";
	cout << endl;
	return 0;
}
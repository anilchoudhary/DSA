#include<bits/stdc++.h>
using namespace std;

bool is_rotated(string str1, string str2)
{
	string str;
	str = str1 + str1;
	if (str.find(str2) != string::npos)
		return 1;
	return 0;
}

int main()
{
	string str1 = "abba";
	string str2 = "bbab";
	if (is_rotated(str1, str2))
		cout << "rotated." << endl;
	else
		cout << "not rotated" << endl;
	return 0;
}
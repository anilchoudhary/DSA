#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
	if (str[s] != str[e])
		return 0;
	if (e < s)
		return 1;
	return isPalindrome(str, s + 1, e - 1);
}

int main()
{
	string str = "bbbbbaa";
	if (isPalindrome(str, 0, str.length() - 1))
		cout << "Palindrome";
	else
		cout << "Not Palindrome";
	return 0;
}
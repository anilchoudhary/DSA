#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
	if (str[i] != str[j])
		return false;
	if ((str[i] == str[j]) && (i == j))
		return true;

	return isPalindrome(str, i + 1, j - 1);
}

int main()
{
	string str = "alla";
	if (isPalindrome(str, 0, str.length() - 1))
		cout << "String is palindrome";
	else
		cout << "String is not palindrome";
}
#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n)
// Space Complexity = O(1)

int main()
{
	string str = "abdba";
	int i, j;
	i = 0; j = str.length() - 1;
	while (i <= j)
	{
		if (str[i] == str[j])
		{
			i++;
			j--;
		}
		else
		{
			cout << "Not palindrome.";
			return 0;
		}
	}
	cout << "Palindrome." << endl;
	return 0;
}
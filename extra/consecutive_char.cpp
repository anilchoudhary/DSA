#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "abcdeabcdefabcdefghi";
	int count = 1;
	int max = INT_MIN;
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i + 1] - str[i] == 1)
			count++;
		else
		{
			if (count > max)
				max = count;
			count = 1;
		}
	}
	if (count > max)
		max = count;
	cout << max << endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		int spaces = n - 1 - i;
		int stars = 2 * i + 1;
		for (int j = 0; j < spaces; ++j)
			cout << " ";
		for (int j = 0; j < stars; ++j)
			cout << "*";
		cout << endl;
	}
}
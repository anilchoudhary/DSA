#include<iostream>
using namespace std;
int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int count_char[26] = {0};
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.length();
		int m = s2.length();
		if (n != m)
		{
			cout << "NO" << endl;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				count_char[s1[i] - 'a']++;
				count_char[s2[i] - 'a']--;
			}
			int flag = 1;
			for (int i = 0; i < 26; i++)
			{
				if (count_char[i] != 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				cout << "YES";
			else
				cout << "NO";
			cout << endl;
		}
	}

	return 0;
}
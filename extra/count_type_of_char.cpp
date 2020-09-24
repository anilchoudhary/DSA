#include<iostream>
using namespace std;
int main()
{
	//code

	int t;
	cin >> t;
	while (t--)
	{
		int uc = 0, lc = 0, sc = 0, dc = 0;
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
				uc++;
			else if (islower(str[i]))
				lc++;
			else if (isdigit(str[i]))
				dc++;
			else
				sc++;
		}
		cout << uc << endl;
		cout << lc << endl;
		cout << dc << endl;
		cout << sc << endl;

	}
	return 0;
}
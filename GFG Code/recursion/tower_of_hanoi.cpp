#include<bits/stdc++.h>
using namespace std;

void toh(int n, char s = 's', char a = 'a', char d = 'd')
{
	if (n == 1)
	{
		cout << "move 1 from " << s << " to " << d << endl;
		return;
	}
	toh(n - 1, s, d, a);
	cout << "move " << n << " from " << s << " to " << d << endl;
	toh(n - 1, s, a, d);

}

int main()
{
	int n = 3;
	toh(n);
	return 0;
}
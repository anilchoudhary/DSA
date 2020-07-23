#include<bits/stdc++.h>
using namespace std;

int main()
{
	int base, height;
	base = 3;
	height = 4;
	// cin>>base>>height;
	int hypotenuse;
	hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
	cout << hypotenuse << endl;
	return 0;
}
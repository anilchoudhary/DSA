#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5 };
	int n = vec.size();
	int k = 4;
	reverse(vec.begin(), vec.begin() + k);
	reverse(vec.begin(), vec.end());
	for (auto x : vec)
		cout << x << " ";

	return 0;
}
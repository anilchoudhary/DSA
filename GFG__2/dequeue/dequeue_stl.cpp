#include<bits/stdc++.h>
using namespace std;

int main()
{
	deque<int> dq = {3, 4, 5};
	dq.push_front(2);
	dq.push_back(6);
	for (auto x : dq)
		cout << x << " ";
	cout << endl;
	cout << dq.front() << " " << dq.back();
	cout << endl;
	return 0;
}
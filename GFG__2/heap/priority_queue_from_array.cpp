#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {5, 10, 15};
	priority_queue<int, vector<int> , greater<int>> pq(arr, arr + 3);
	cout << pq.size() << endl;
	cout << pq.top() << endl;
	while (pq.empty() == false)
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<double> findAverages(int K, vector<int> arr)
{
	std::vector<double> result(arr.size() - K + 1);
	double sum = 0;
	for (int i = 0; i <= arr.size() - K; i++)
	{
		sum = 0;
		for (int j = i; j < i + K; j++)
		{
			sum += arr[j];
		}
		result[i] = sum / K;
	}
	return result;
}

int main()
{

#ifndef ONLINE_JUDGES
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<double> result = findAverages(5, vector<int> {1, 3, 2, 6, -1, 4, 1, 8, 2});
	cout << "Average of subarrays of size K" << endl;
	for (double d : result)
	{
		cout << d << " ";
	}
	return 0;
}
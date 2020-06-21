#include<bits/stdc++.h>
using namespace std;

vector<double> findAverages(int k, vector<int> arr)
{
	std::vector<double> result(arr.size() - k + 1);
	double sum = 0;
	int j = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
		if (i >= k - 1)
		{
			result[j] = sum / k;
			sum -= arr[j];
			j++;
		}
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
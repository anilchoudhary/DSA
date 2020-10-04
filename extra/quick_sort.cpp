#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& vec, int l, int h)
{
	int pivot = vec[h];
	int j = l;
	for (int i = l; i < h; i++)
	{
		if (vec[i] < pivot)
		{
			swap(vec[i], vec[j]);
			j++;
		}
	}
	swap(vec[j], pivot);
	swap(vec[h], pivot);
	return j;
}

void quicksortt(vector<int>& vec, int l, int h)
{
	if (l < h)
	{
		int m = partition(vec, l, h);
		quicksortt(vec, l , m - 1);
		quicksortt(vec, m + 1, h);
	}
}

int main()
{
	int n;
	cin >> n;
	std::vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	quicksortt(vec, 0, n - 1);
	for (auto x : vec)
		cout << x << " ";
	return 0;
}
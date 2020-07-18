#include <bits/stdc++.h>
using namespace std;

int get_shortest_time(vector<int> &petrol_capacity_of_vehicles)
{
	int total_vehicles = petrol_capacity_of_vehicles.size();
	int total_petrol_needed = 0;
	for (int i = 0; i < total_vehicles; i++)
		total_petrol_needed += petrol_capacity_of_vehicles[i];

	bool dp[total_vehicles + 1][total_petrol_needed + 1];

	for (int i = 1; i <= total_petrol_needed; i++)
		dp[0][i] = false;

	for (int i = 0; i <= total_vehicles; i++)
		dp[i][0] = true;


	for (int i = 1; i <= total_vehicles; i++)
	{
		for (int j = 1; j <= total_petrol_needed; j++)
		{
			dp[i][j] = dp[i - 1][j];

			if (petrol_capacity_of_vehicles[i - 1] <= j)
				dp[i][j] |= dp[i - 1][j - petrol_capacity_of_vehicles[i - 1]];
		}
	}

	int shortest_time;
	for (int j = total_petrol_needed / 2; j >= 0; j--)
	{
		if (dp[total_vehicles][j] == true)
		{
			shortest_time = total_petrol_needed - j;
			break;
		}
	}
	return shortest_time;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	vector<int> petrol_capacity_of_vehicles;
	int x;
	while (cin >> x)
	{
		petrol_capacity_of_vehicles.push_back(x);
	}
	cout << get_shortest_time(petrol_capacity_of_vehicles);
	return 0;
}

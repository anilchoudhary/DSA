#include<bits/stdc++.h>
using namespace std;
string busStops[] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
int path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};

int findIndex(string str)
{
	for (int i = 0; i < 8; i++)
	{
		if (busStops[i] == str)
			return i;
	}
	return -1;
}

void getFare(string source, string destination)
{
	if (source == destination)
	{
		cout << "INVALID INPUT";
		return;
	}
	// cout << source << " " << destination << endl;
	int si = findIndex(source);
	int di = findIndex(destination);
	// cout << si << " " << di << endl;
	int distance = 0;
	si++;
	int temp = si;
	while (si % 8 != (di + 1))
	{
		temp = si % 8;
		distance += path[temp];
		si++;
	}
	float result = ceil(distance * 0.005);
	cout << fixed << setprecision(1) << result << "INR" << endl;
	return ;
}

void solve()
{
	string source = "", destination = "";
	// string source1, destination1;
	cin >> source >> destination;
	transform(source.begin(), source.end(), source.begin(), ::toupper);
	transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
	// source = boost::to_upper(souce1);
	// destination = boost::to_upper(destination1);
	// destination = toupper(destination1[0]) + toupper(destination1[1]);

	getFare(source, destination);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}
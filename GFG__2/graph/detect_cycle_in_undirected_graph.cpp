#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool dfs_rec(vector<int> adj [], int s, vector<bool> &visited, int parent)
{
	visited[s] = true;
	for (auto x : adj[s])
	{
		if (!visited[x])
		{
			if (dfs_rec(adj, x, visited, s))
				return true;
		}
		else if (x != parent)
		{
			return true;
		}
	}
	return false;
}

bool dfs(vector<int> adj[], int v)
{
	vector<bool> visited(false, v);
	for (int i = 0; i < v; i++)
	{
		if (!visited[i])
			if (dfs_rec(adj, i, visited, -1))
				return true;
	}
	return false;
}

int main()
{
	int v = 4;
	vector<int> adj[v];
	addEdge(adj, 0, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 3);
	// addEdge(adj, 0, 1);
	// addEdge(adj, 1, 2);
	dfs(adj, v) ? cout << "yes" : cout << "no";
	return 0;

}
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
		     << v << "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

void dfs_rec(vector<int> adj[], int s, vector<bool> &visited)
{
	visited[s] = 1;
	cout << s << " ";
	for (auto x : adj[s])
	{
		if (visited[x] == 0 )
			dfs_rec(adj, x, visited);
	}
}

void dfs(vector<int> adj[], int v, int s)
{
	vector<bool> visited(0, v);
	dfs_rec(adj, s, visited);
}


int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	// printGraph(adj, V);
	dfs(adj, V, 2);
	return 0;
}

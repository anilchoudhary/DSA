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
		cout << endl;
	}
}

void bfs(vector<int> adj[], int s, vector<bool> &visited)
{
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	while (q.empty() == false)
	{
		int cur = q.front();
		q.pop();
		// cout << cur << " ";
		for ( auto x : adj[cur])
		{
			if (visited[x] == 0)
			{
				q.push(x);
				visited[x] = 1;
			}
		}
	}
}

void bfs_dis(vector<int> adj[], int v)
{
	vector<bool> visited(0, v);
	int total_component = 0;
	for (int i = 0; i < v; i++)
	{
		if (visited[i] == 0)
		{
			bfs(adj, i, visited);
			total_component += 1;
		}
	}
	cout << total_component << endl;
}

int main()
{
	int V = 7;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 4, 6);
	addEdge(adj, 1, 3);
	addEdge(adj, 4, 5);
	addEdge(adj, 2, 3);
	addEdge(adj, 5, 6);
	// printGraph(adj, V);
	bfs_dis(adj, V);
	return 0;
}

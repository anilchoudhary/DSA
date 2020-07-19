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

void bfs(vector<int> adj[], int v, int s)
{
	vector<bool> visited(0, v);
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	while (q.empty() == false)
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
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
	bfs(adj, V, 2);
	return 0;
}

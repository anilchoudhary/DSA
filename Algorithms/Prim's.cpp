#include<iostream>
#include<climits>
using namespace std;

int findMinVertex (int* weights, bool* visited, int n)
{
	int minVertex , min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		if(!visited[i] && (weights[i] < min))
		min = weights[i] , minVertex = i;
	}
	return minVertex;
}

void prims( int** edges, int n)
{
	int* parents = new int[n];
	int* weights = new int[n];
	bool* visited = new bool[n];
	
	for(int i = 0; i < n; i++)
	{
		visited[i] = false;
		weights[i] = INT_MAX;
	}
	
	parents[0] = -1;
	weights[0] = 0;
	
	for(int i = 0; i < n-1; i++)
	{
		int minVertex = findMinVertex(weights, visited, n);
		visited[minVertex] =  true;
		
		for(int j = 0; j < n; j++)
		{
			if(edges[minVertex][j] != 0 && !visited[j])
			{
				if(edges[minVertex][j] < weights[j])
				{
					weights[j] = edges[minVertex][j];
					parents[j] = minVertex;
				}
			}
		}
	}
	
	cout<<"MST of given graph: \n";
	
	for( int i = 1; i < n; i++ )
	{
		if(parents[i] < i)
		{
			cout<< parents[i] << " " << i << " " << weights[i] << endl;
		}
		else
		{
			cout << i << " " << parents[i] << " " << weights[i] << endl;
		}
	}
	
}

int main()
{
	int n, e;
	cout<<"Enter the number of nodes and edges: ";
	cin >> n >> e;
	int** edges = new int*[n];
	for (int i = 0; i < n; i++)
	{
		edges[i] = new int[n];
		for(int j = 0; j < n; j++)
		{
			edges[i][j] = 0;
		}
	}
	
	for(int i = 0; i < e; i++)
	{
		int f, s, weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout << endl;
	prims(edges, n);
	
	return 0;
}


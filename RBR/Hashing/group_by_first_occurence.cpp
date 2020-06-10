#include "bits/stdc++.h"
using namespace std;

void groupElements(int arr[], int n)
{
	bool *visited = new bool[n];
	for (int i = 0; i < n; i++)
		visited[i] = false;

	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			cout << arr[i] << " ";
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					cout << arr[i] << " ";
					visited[j] = true;
				}
			}
		}
	}

	delete [] visited;
}

int main()
{
	int arr[] = {4, 5, 7, 2, 2, 5, 7, 8, 5, 3, 3, 6, 7, 8, 3, 1, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	groupElements(arr, n);
	return 0;
}

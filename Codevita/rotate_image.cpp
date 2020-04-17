#include<bits/stdc++.h>
using namespace std;

void rotate_stl(int arr[][1000], int n)
{
	for (int i = 0; i < n; i++)
		reverse(arr[i], arr[i] + n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				swap(arr[i][j], arr[j][i]);
			}
		}
	}
}

void rotate(int arr[][1000], int n)
{
	for (int r = 0; r < n; r++)
	{
		int sc = 0;
		int ec = n - 1;
		while (sc < ec)
		{
			swap(arr[r][sc], arr[r][ec]);
			sc++;
			ec--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				swap(arr[i][j], arr[j][i]);
			}
		}
	}
}

void display(int arr[][1000], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

}

int main()
{
	int arr[1000][1000];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	rotate_stl(arr, n);
	display(arr, n);
	return 0;
}
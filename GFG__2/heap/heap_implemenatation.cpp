#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 100

class minheap
{
public:
	int arr[MAXSIZE];
	int size;
	int capacity;
	minheap()
	{
		size = 0;
		capacity = MAXSIZE;
	}
	int left(int i)
	{
		return (2 * i + 1);
	}
	int right(int i)
	{
		return (2 * i + 2);
	}
	int parent_index(int i)
	{
		return (i - 1) / 2;
	}
	void insert(int d)
	{
		if (size == capacity) return;
		size++;
		arr[size - 1] = d;
		int parent = parent_index(size - 1);
		for (int i = size - 1; i != 0 && (arr[parent] > arr[i]); i++)
		{
			swap(arr[parent], arr[i]);
			i = parent_index(i);
		}
	}
};

int main()
{
	minheap mmh;
	mmh.insert(83);
	mmh.insert(03);
	mmh.insert(39);
	mmh.insert(31);
	mmh.insert(23);

	for (int i = 0; i < mmh.size; i++)
		cout << mmh.arr[i] << " ";
	cout << endl;
	return 0;

}
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

	void minheapify(int i)
	{
		int lt = left(i), rt = right(i);
		int smallest = i;
		if (lt < size && arr[lt] < arr[i])
			smallest = lt;
		if (rt < size && arr[rt] < arr[smallest])
			smallest = rt;
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);
			minheapify(smallest);
		}
	}

	int extract_min()
	{
		if (size == 0)
			return -1;
		if (size == 1 )
		{
			size--;
			return arr[0];
		}
		int temp = arr[0];
		swap(arr[0], arr[size - 1]);
		size--;
		minheapify(0);
		return temp;
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
	cout << mmh.extract_min() << endl;
	cout << mmh.extract_min() << endl;
	cout << mmh.extract_min() << endl;
	cout << mmh.extract_min() << endl;
	cout << mmh.extract_min() << endl;
	cout << mmh.extract_min() << endl;

	return 0;

}
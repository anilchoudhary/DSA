#include<iostream>
using namespace std;

int a[5] = {0, 0, 0, 0, 0};
int j = 0;
int k = 0;

void hashing (int data)
{
	int pos = data % 5;
	if (a[pos] == 0)
		a[pos] = data;
	else
	{
		for (int i = (pos + 1); i < 5; i++)
		{
			if (a[i] == 0)
			{
				a[i] = data;
				break;
			}
			j = i;
		}
		if (++j == 5)
		{
			cout << "Out of Space\n";
		}
	}
}

void display()
{
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";

}

void search(int data)
{
	int pos = data % 5;
	int index;
	if (a[pos] == 0)
		cout << "The element is deleted";
	else if (a[pos] == data)
		cout << "The element is found at index position " << pos + 1;
	else
	{
		for (int i = (pos + 1); i < 5; i++)
		{
			if (a[i] == data)
				cout << "The element is found at index position " << i + 1;
			k = i;
		}
		if (++k == 5)
			cout << "Element not found";
	}
}

int main()
{
	int x, y;
	cout << "Enter the elements in array: \n";
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		hashing(x);
	}
	display();
	cout << "\n Enter the element to be searched: ";
	cin >> y;
	cout << endl;
	search(y);
	return 0;

}






















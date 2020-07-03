#include<bits/stdc++.h>
using namespace std;

int cut_rope(int n, int arr[])
{

	if (n <= 0)
		return 0;
	else if (n % *min_element(arr, arr + 3) != 0)
		return -1;
	n -= *min_element(arr, arr + 3);
	return 1 + cut_rope(n, arr);
}

int main()
{
	int rope_length = 10;
	int pieces_length[] = {12, 9, 11};
	cout << cut_rope(rope_length, pieces_length) << endl;
}
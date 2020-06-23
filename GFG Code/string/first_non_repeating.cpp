#include<bits/stdc++.h>

using namespace std;
#define MAX_CHAR 256

int findRepeatFirst(string str)
{
	// int p = -1, i, k;

	// int hash[MAX_CHAR] = { 0 };

	// int pos[MAX_CHAR];

	// for (i = 0; i < strlen(s); i++) {
	// 	k = (int)s[i];
	// 	if (hash[k] == 0) {
	// 		hash[k]++;
	// 		pos[k] = i;
	// 	} else if (hash[k] == 1)
	// 		hash[k]++;
	// }

	// for (i = 0; i < MAX_CHAR; i++) {
	// 	if (hash[i] == 1) {
	// 		if (p == -1)
	// 			p = pos[i];
	// 		else if (p > pos[i])
	// 			p = pos[i];
	// 	}
	// }

	// return p;
	//
	pair<int, int> arr[MAX_CHAR];
	int min_index = INT_MAX;
	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i]].first++;
		arr[str[i]].second = i;
	}
	for (int i = 0; i < MAX_CHAR; i++)
	{
		if (arr[i].first == 1)
			min_index	= min(min_index , arr[i].second);
	}
	cout << str[min_index] << endl;
	return 0;
}

int main()
{
	char str[] = "geeksforgeek";
	int pos = findRepeatFirst(str);
	// if (pos == -1)
	// 	cout << "Not found";
	// else
	// 	cout << str[pos];
	return 0;
}


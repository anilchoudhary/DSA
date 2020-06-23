#include<bits/stdc++.h>

using namespace std;
#define MAX_CHAR 256

// int findRepeatFirst(char* s)
// {
// 	int p = -1, i;
// 	char k;

// 	int counter[MAX_CHAR] = { 0 };

// 	int pos[MAX_CHAR];

// 	for (i = 0; i < strlen(s); i++) {
// 		// k = s[i];
// 		// if (counter[k] == 0)
// 		// {
// 		// 	counter[k]++;
// 		// 	pos[k] = i;
// 		// }
// 		// else if (counter[k] == 1)
// 		// 	counter[k]++;

// 		counter[s[i]] += 1;
// 		if (counter[s[i]] == 1)
// 			pos[s[i]] = i;
// 	}

// 	for (i = 0; i < MAX_CHAR; i++) {
// 		if (counter[i] >= 2) {
// 			if (p == -1)
// 				p = pos[i];
// 			else if (p > pos[i])
// 				p = pos[i];
// 		}
// 	}

// 	return p;
// }

int findRepeatFirst(string str)
{
	unordered_map <char, int> freq;
	unordered_map <char, int> pos;
	char ans; int min_index = INT_MAX;
	for (int i = 0; i < str.length(); i++)
	{
		freq[str[i]]++;
		if (freq[str[i]] == 1)
			pos[str[i]] = i;

		if (freq[str[i]] >= 2)
		{
			if (min_index > pos[str[i]])
			{
				min_index = pos[str[i]];
				ans = str[i];
			}
		}
	}
	cout << ans << endl;
	return 0;

}

int main()
{
	char str[] = "geeksforgeeks";
	int pos = findRepeatFirst(str);
	// if (pos == -1)
	// 	cout << "Not found";
	// else
	// 	cout << str[pos] << endl;
	return 0;
}


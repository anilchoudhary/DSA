#include<bits/stdc++.h>
using namespace std;

int extract_largest_digit(int n)
{
	int digit, maxi = INT_MIN;
	while (n > 0)
	{
		digit = n % 10;
		if (digit > maxi)
			maxi = digit;
		n /= 10;
	}
	return maxi;
}

int extract_smallest_digit(int n)
{
	int digit, mini = INT_MAX;
	while (n > 0)
	{
		digit = n % 10;
		if (digit < mini)
			mini = digit;
		n /= 10;
	}
	return mini;
}

int number_of_digits(int n)
{
	int total_digits = 0;
	while (n > 0)
	{
		total_digits += 1;
		n /= 10;
	}
	return total_digits;
}

// int convert_3_to_2_digits(int n)
// {
// 	int result = 0, x, temp = n;
// 	while (n > 0)
// 	{
// 		x = n % 10;
// 		n /= 10;
// 	}
// 	result = abs(x * 100 - temp);
// 	return result;
// }

int extract_most_significant_digit(int n)
{
	int x;
	if (n < 10)
		return 0;
	while (n > 0)
	{
		x = n % 10;
		n /= 10;
	}
	return x;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int count_of_numbers;
	cin >> count_of_numbers;
	int array_of_3_digit_intergers[count_of_numbers];
	for (int i = 0; i < count_of_numbers; i++)
		cin >> array_of_3_digit_intergers[i];
	int array_of_bit_scores[count_of_numbers];
	int maxi, mini, bit_score;
	for (int i = 0; i < count_of_numbers; i++)
	{
		maxi = extract_largest_digit(array_of_3_digit_intergers[i]);
		mini = extract_smallest_digit(array_of_3_digit_intergers[i]);
		bit_score = 11 * maxi + 7 * mini;
		bit_score %= 100;
		array_of_bit_scores[i] =  bit_score;
	}
	int index;
	map <int, vector<int>> indices_of_bit_scores;
	for (int i = 0; i < count_of_numbers; i++)
	{
		index = extract_most_significant_digit(array_of_bit_scores[i]);
		indices_of_bit_scores[index].push_back(i + 1);
	}

	int odd_indices = 0, even_indices = 0, max_indices = 0;
	int total_pairs = 0;
	for (auto x : indices_of_bit_scores)
	{
		odd_indices = 0, even_indices = 0;
		max_indices = 0;
		for (auto y : x.second)
		{
			if (y % 2 == 0)
				even_indices += 1;
			else
				odd_indices += 1;
			max_indices = max(odd_indices, even_indices);
		}
		if (max_indices == 2)
			total_pairs += 1;
		else if (max_indices >= 3)
			total_pairs += 2;
	}
	cout << total_pairs;
	return 0;
}
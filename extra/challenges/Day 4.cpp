#include<bits/stdc++.h>
using namespace std;
// count the number of hotdog packs without using / and %

int main()
{
	int total_hot_dogs = 400;
	int hot_dogs_1_pack = 8;
	int number_of_packs = 0;
	while(total_hot_dogs > 0)
	{
		total_hot_dogs -= hot_dogs_1_pack;
		number_of_packs++;
	}
	cout<<number_of_packs;
}

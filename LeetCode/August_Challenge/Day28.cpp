// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
	int rand10() {
		int i, j, x;
		do {
			i = rand7();
			j = rand7();
			x = j + (i - 1) * 7;
		} while (x > 40);
		return 1 + (x) % 10;
	}
};
class Solution {
public:
	void reverseString(vector<char>& s) {
		int size = s.size();
		int end = size - 1;
		int i = 0;
		while (i < end)
			swap(s[i++], s[end--]);
	}
};
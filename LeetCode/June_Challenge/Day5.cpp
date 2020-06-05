class Solution {
public:
	std::vector<int> v;
	int total;
	Solution(std::vector<int>& w) {
		total = 0;
		for (int i = 0; i < w.size(); i++)
		{
			total += w[i];
			v.push_back(total - 1);
		}
		srand(time(NULL));
	}
	int pickIndex() {
		int num = rand() % total;
		if (num <= v[0])
			return 0;
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i] >= num && v[i - 1] < num)
				return i;
		}
		return -1;
	}
};
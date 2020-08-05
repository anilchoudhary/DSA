class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		std::vector<int> numscopy;
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			numscopy.push_back(nums[i]);
		}

		for (int i = 0; i < n; i++)
		{
			nums[(i + k) % n] = numscopy[i];
		}
	}
};
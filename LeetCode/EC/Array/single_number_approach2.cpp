class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ussum = 0, numssum = 0;
		unordered_set <int> us;
		for (int i = 0; i < nums.size(); i++)
		{
			us.insert(nums[i]);
			numssum += nums[i];
		}
		for (auto x : us)
		{
			ussum += x;
		}
		return 2 * ussum - numssum;
	}
};
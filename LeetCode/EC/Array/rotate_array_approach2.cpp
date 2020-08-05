class Solution {
public:

	void shift_right(vector<int>& nums)
	{
		int temp, previous = nums[nums.size() - 1];
		for (int i = 0; i < nums.size(); i++)
		{
			temp = arr[i];
			arr[i] = previous;
			previous = temp;
		}
	}
	void rotate(vector<int>& nums, int k) {
		for (int i = 0; i < k; i++)
			shift_right(nums);
	}
};
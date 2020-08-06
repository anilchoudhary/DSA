class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int a = 0, b = 0;
        while (b < n)
        {
            if (nums[b] != 0 )
            {
                swap(nums[a], nums[b]);
                a++;
                b++;
            }
            else
                b++;
        }
    }
};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set <int> us;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (us.find(nums[i]) != us.end())
                ans.push_back(nums[i]);
            us.insert(nums[i]);
        }
        return ans;
    }
};
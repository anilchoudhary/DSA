class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0, b = nums.size() - 1;
        int n = nums.size();
        vector<int> ans;
        unordered_map <int, int> um;
        int x;
        for (int i = 0; i < n; i++)
        {
            x = target - nums[i];
            if (um.find(x) != um.end())
            {
                ans.push_back(um[x]);
                ans.push_back(i);
                return ans;
            }
            um[nums[i]] = i;
        }
        return ans;
    }
};
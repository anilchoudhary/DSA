class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> sans;
        vector<vector<int>> fans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int a = i + 1, b = n - 1;
            while (b > a)
            {
                sum = nums[i] + nums[a] + nums[b];
                if (sum == 0)
                {
                    sans.push_back(nums[i]);
                    sans.push_back(nums[a]);
                    sans.push_back(nums[b]);
                    fans.push_back(sans);
                    sans.clear();
                    while (b > a && nums[a + 1] == nums[a]) a++;
                    while (b > a && nums[b - 1] == nums[b]) b--;
                    a++; b--;
                }
                else if (sum < 0)
                    a++;
                else
                    b--;
            }
            while (i < n - 2 && nums[i + 1] == nums[i]) i++;
        }
        return fans;
    }
};
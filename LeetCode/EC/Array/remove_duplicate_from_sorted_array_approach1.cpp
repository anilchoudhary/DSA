class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int len = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
                len++;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
                nums[i - 1] = -99999;
        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == -99999)
            {
                nums.erase(nums.begin() + i);
                i = -1;
            }

        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        return len;
    }
};
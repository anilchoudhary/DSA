class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];
        //FLOYD HARE & TORTOISE ALGO
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        // FINDING STARTING POINT OF CYCLE
        int start = nums[0];
        while (start != slow)
        {
            start = nums[start];
            slow = nums[slow];
        }
        return start;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set <int> us;

        for (int i = 0; i < nums.size(); i++)
        {
            if (us.find(nums[i]) != us.end())
                return nums[i];
            else
                us.insert(nums[i]);
        }
        return 0;
    }
};
class Solution {
public:
    vector<int> vect;
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int, int> mp;
        for (int i = 0; i < intervals.size(); i++)
            mp[intervals[i][0]] = i;

        for (auto interval : intervals) {
            auto it = mp.lower_bound(interval[1]);
            if (it != mp.end())
                vect.push_back((*it).second);
            else
                vect.push_back(-1);
        }

        return vect;
    }
};
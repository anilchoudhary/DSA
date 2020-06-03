class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue< pair<int, int> > q;
        int totalCost = 0;

        for (int i = 0; i < costs.size(); i++)
        {
            std::vector<int> v = costs[i];
            int diff = v[1] - v[0];
            q.push(make_pair(diff, i));
        }
        for (int i = 0; i < costs.size() / 2; i++)
        {
            pair<int, int>p = q.top();
            int idx = p.second;
            std::vector<int> v = costs[idx];
            totalCost += v[0];
            q.pop();
        }

        while (!q.empty())
        {
            pair<int, int> p = q.top();
            int idx = p.second;
            std::vector<int> v = costs[idx];
            totalCost += v[1];
            q.pop();
        }
        return totalCost;

    }
};
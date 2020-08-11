class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.size() == 0)
            return 0;
        sort(citations.begin(), citations.end());
        int i;
        for (i = 0; i < citations.size(); i++)
        {
            if (citations[i] != 0 && citations[i] >= (citations.size() - i))
                break;
        }
        return (citations.size() - i);
    }
};
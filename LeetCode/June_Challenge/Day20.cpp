class Solution
{
public:
    string getPermutation(int n, int k)
    {
        vector<int> arr(n);
        for (int i = 1; i <= n; i++)
        {
            arr[i - 1] = i;
        }

        for (int i = 1; i < k; i++)
        {
            next_permutation(arr.begin(), arr.end());
        }

        string str;
        for (int i = 0; i < n; i++)
        {
            str += to_string(arr[i]);
        }

        return str;
    }
};
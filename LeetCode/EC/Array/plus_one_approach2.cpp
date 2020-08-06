class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    long long int num = 0;
    for (int i = 0; i < n; i++)
    {
      num = num * 10 + digits[i];
    }
    num += 1;
    int rem;
    vector<int> ans;
    while (num > 0)
    {
      rem = num % 10;
      ans.push_back(rem);
      num /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
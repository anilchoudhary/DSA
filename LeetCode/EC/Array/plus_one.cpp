class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size() - 1;
    if (digits[n] == 9)
    {
      while (n >= 0)
      {

        if (digits[n] == 9 && n == 0)
        {
          digits[n] = 0;
          digits.insert(digits.begin(), 1);
        }
        else if (digits[n] == 9)
          digits[n] = 0;
        else
        {
          digits[n] = digits[n] + 1;
          break;
        }
        n--;
      }
    }
    else
      digits[n] += 1;
    return digits;
  }
};
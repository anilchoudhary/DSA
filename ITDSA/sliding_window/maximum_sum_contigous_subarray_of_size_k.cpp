using namespace std;

#include <iostream>
#include <vector>

class MaxSumSubArrayOfSizeK {
public:
  static int findMaxSumSubArray(int k, const vector<int>& arr) {
    int maxSum = 0;
    int sum = 0;
    // TODO: Write your code here
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      sum += arr[i];
      if (i >= k - 1)
      {
        if (sum > maxSum)
          maxSum = sum;
        sum -= arr[j];
        j++;
      }
    }
    return maxSum;
  }
};

int main(int argc, char* argv[]) {
#ifndef ONLINE_JUDGES
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubArrayOfSizeK::findMaxSumSubArray(3, vector<int> {2, 1, 5, 1, 3, 2}) << endl;
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubArrayOfSizeK::findMaxSumSubArray(2, vector<int> {2, 3, 4, 1, 5}) << endl;
}
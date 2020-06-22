using namespace std;

#include <bits/stdc++.h>

class MinSizeSubArraySum {
public:
  static int findMinSubArray(int S, const vector<int>& arr) {
    int mini = INT_MAX; int j = 0;
    int windowSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      windowSum += arr[i];
      while (windowSum >= S)
      {
        mini = min(mini, i - j + 1);
        windowSum -= arr[j];
        j++;
      }
    }
    return mini == INT_MAX ? 0 : mini;
  }
};

int main(int argc, char* argv[]) {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int result = MinSizeSubArraySum::findMinSubArray(7, vector<int> {2, 1, 5, 2, 3, 2});
  cout << "Smallest subarray length: " << result << endl;
  result = MinSizeSubArraySum::findMinSubArray(7, vector<int> {2, 1, 5, 2, 8});
  cout << "Smallest subarray length: " << result << endl;
  result = MinSizeSubArraySum::findMinSubArray(8, vector<int> {3, 4, 1, 1, 6});
  cout << "Smallest subarray length: " << result << endl;
}
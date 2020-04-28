#include<bits/stdc++.h>
using namespace std;
int s[100];

void summ (int arr[], int n, int k)
{

  int res = 0;
  for (int i = 0; i < k; i++)
    res += arr[i];

  int curr_sum = res;
  for (int i = k; i < n; i++)
  {
    curr_sum += arr[i] - arr[i - k];
    res = max(res, curr_sum);
  }
  cout << res;
}

int main()
{
  int arr[] = {1, 2, 3, 1, 4, 5};
  int n = 6;
  int k = 3;
  summ(arr, n, k);

}

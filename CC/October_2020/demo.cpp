#include <bits/stdc++.h >
using namespace std;

void solve()
{
  float x;
  vector<float> vec;
  while (cin >> x)
  {

    vec.push_back(x);
  }
  sort(vec.begin(), vec.end());
  int n = vec.size();
  n--;

  while (vec[n] == vec[n - 1])
    n--;
  n--;
  while (n >= 0)
    cout << vec[n] << " ";

}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  solve();
  return 0;
}
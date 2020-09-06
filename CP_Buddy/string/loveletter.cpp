#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin >> t;
  while (t--)
  {
    string str;
    cin >> str;
    int i = 0;
    int j = str.length() - 1;
    int result = 0, x, y;
    while (i < j)
    {
      x = (int)(str[i]);
      y = (int)(str[j]);
      result += abs(x - y);
      i++; j--;
    }
    cout << result << endl;
  }
  return 0;
}
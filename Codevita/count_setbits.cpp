#include<bits/stdc++.h>
using namespace std;

// approach 1
int countBits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1);
        n = n >> 1;
    }
    return ans;
}

// approach 2
int countBitsFast(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}
// approach 3

int main()
{
    int n;
    cin >> n;
    cout << countBits(n);
    cout << endl << countBitsFast(n) << endl;
    cout << __builtin_popcount(n);
    return 0;
}

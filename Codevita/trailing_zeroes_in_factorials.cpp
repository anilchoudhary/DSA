#include<bits/stdc++.h>
using namespace std;

int tz(int n)
{
    int ans = 0;
    int p = 5;
    while ((n / p) > 0)
    {
        ans += n / p;
        p *= 5;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << tz(n);
    return 0;
}

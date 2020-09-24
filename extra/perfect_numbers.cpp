#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        ll ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans += i;
                if (i != n / i)
                    ans += n / i;
            }
        }
        if (n == ans)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

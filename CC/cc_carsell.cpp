#include<bits/stdc++.h>
using namespace std;
int price[100000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        sort(price, price + n, greater<int>());
        int ans = price[0];
        for (int i = 1; i < n; i++)
        {
            if ((price[i] - i) > 0)
            {
                ans = ans % 1000000007 + (price[i] - i) % 1000000007;

            }
        }
        cout << ans << endl;
    }
    return 0;
}

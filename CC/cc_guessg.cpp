#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{

#ifndef ONLINE_JUDGES
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, l, h;
    cin >> n;
    k = 1;
    l = 1;
    h = n;

    while (1)
    {
        int m = (h + l) / 2;
        cout << m << endl;
        char ch;
        cin >> ch;
        if (ch == 'E')
        {
            break;
        }

        if (l == h)
        {
            l = 1;
            h = n;
            k++;
            break;
        }

        if (k % 2 == 1)
        {
            if (ch == 'G')
            {
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
        }
        k++;
    }

    while (1)
    {
        int m = (h + l) / 2;
        cout << m << endl;
        char ch;
        cin >> ch;
        if (ch == 'E')
        {
            break;
        }

        if (k % 2 == 0)
        {
            if (ch == 'G')
            {
                l = m + 1;
            }
            else
            {
                h = m - 1;
            }
        }

        k++;
    }
    return 0;
}
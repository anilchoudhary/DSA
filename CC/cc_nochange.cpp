#include<bits/stdc++.h>
using namespace std;

struct denom
{
    long long int v, j, c;
    denom()
    {
        c = 0;
    }
};

bool byValue(denom a, denom b)
{
    return a.v > b.v;
}

bool byIndex(denom a, denom b)
{
    return a.j < b.j;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int m, n, p;
        cin >> n >> p;
        denom arr[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i].v;
            arr[i].j = i;
        }
        sort(arr, arr + n, byValue);
        for (int i = 0 ; i < n && p > 0; i++)
        {
            if (p % arr[i].v != 0)
            {
                m = p / arr[i].v + 1;
                arr[i].c = m;
                p -= m * arr[i].v;
            }
            else
            {
                m = p / arr[i].v - 1;
                arr[i].c = m;
                p -= m * arr[i].v;
            }

        }
        if (p < 0)
        {
            sort(arr, arr + n, byIndex);
            cout << "YES ";
            for (int i = 0 ; i < n ; i++)
            {
                cout << arr[i].c << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

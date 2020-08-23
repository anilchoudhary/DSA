#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int z = 0;
        int f = 0;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] == 0)
                z++;
            else if (vec[i] == 1)
                f++;
            else
                s++;
        }

        while (z--)
            cout << 0 << " ";
        while (f--)
            cout << 1 << " ";
        while (s--)
            cout << 2 << " ";
        cout << endl;
    }
    return 0;
}
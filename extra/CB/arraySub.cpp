#include<bits/stdc++.h>
using namespace std;


int main()
{
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
    int n, k, tmp, maxi=INT_MIN;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> k;

    for (int i = 0; i < (n - (k - 1)); i++)
    {
        for (int j = i; j < (i+k); j++)
        {
            maxi = max(maxi, v[j]);
        }
        cout << maxi << " ";
        maxi = INT_MIN;
    }

    return 0;

}



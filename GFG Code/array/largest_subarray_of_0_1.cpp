#include<bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << maxLen(a, n) << endl;
    }
    return 0;
}

int maxLen(int arr[], int N)
{
    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
            arr[i] = -1;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    unordered_map <int, int> um;
    int sum = 0, x;
    int maxi = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            if (maxi < i + 1)
                maxi = i + 1;
        }
        if (um.find(sum) != um.end())
        {
            x = i + 1 - um[sum];
            if (maxi < x)
                maxi = x;
        }
        if (um.find(sum) == um.end())
            um[sum] = i + 1;
    }
    return maxi;
}

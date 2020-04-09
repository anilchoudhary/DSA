#include<bits/stdc++.h>
using namespace std;
int freq[10];

void countFreq(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    //for(int i = 1;i<10;i++)
    //    cout<<freq[i]<<" ";
    //cout<<endl;

    int maxi = freq[1];
    int ans = 1;
    //cout<<maxi<<endl;

    for (int i = 2; i < 10; i++)
    {
        if (maxi < freq[i])
        {
            maxi = freq[i];
            ans = i;
        }
    }
    // cout<<ans<<endl;
    for (int i = 0; i < n; i++)
        cout << ans << " ";

}

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
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n * k];
        for (int i = 0; i < n * k; i++)
        {
            cin >> arr[i];
        }
        int x = 0, sum = 0;
        for (int i = 0; i <= n * k; i++)
        {
            if (x == k)
            {
                cout << sum / k << " ";
                x  = 0;
                sum = 0;
            }
            ++x;
            sum += arr[i];
        }
        // countFreq(arr, n);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int x = 26;
    int arr[n] = {5, 1, -4, 3, 8, 10};
    int presum = 0;
    unordered_set <int> us;
    us.insert(0);
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (us.find(presum - x) != us.end())
        {
            cout << "yes" << endl;
            return 0;
        }
        us.insert(presum);
    }
    cout << "no" << endl;

    return 0;
}

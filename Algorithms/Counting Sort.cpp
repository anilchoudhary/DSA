#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    r = *max_element(a, a + n);
    int b[r + 1] = {0};
    for (int i = 0; i < n; i++)
        b[a[i]]++;
    int j = 0;
    cout << "Array after counting sort: ";
    for (int i = 0; i <= r; i++)
    {
        while (b[i] != 0)
        {
            cout << i << " ";
            b[i]--;
        }
    }

    return 0;
}

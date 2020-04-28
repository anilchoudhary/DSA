#include<bits/stdc++.h>
using namespace std;
int sum;

bool equ(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (lsum == sum - arr[i])
            return true;
        lsum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main()
{
    int arr[] = {4, 2, 2};
    int n = 3;
    if (equ(arr, n))
        cout << "YES";
    else
        cout << "NO";
    return 1;
}

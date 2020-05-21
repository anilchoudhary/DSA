#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int *arr = new long long int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int result = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            result += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<result;
    return 0;
}

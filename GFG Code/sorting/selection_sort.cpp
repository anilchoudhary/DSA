#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int mini = INT_MAX;
    int mi=0;
    int arr[n] = {55,95,17,26,10,1};
    int x = n-1;
    for(int i=0;i<n-1;i++)
    {
        mi = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[mi]>arr[j])
            {
                mi = j;
            }
        }
        swap(arr[mi], arr[i]);
    }
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {129, 118, 134, 55, 6};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
                swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

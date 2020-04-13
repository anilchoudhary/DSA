#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {2,4,9,1,5,10,11,3};
    sort(arr, arr+n);
    int l,h,sum=0;
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i]*arr[i];
    }

    for(int i=0;i<n-2;i++)
    {
        l=0;h=n-1;
        while(l<h)
        {
            sum = arr[l] + arr[h];
            if(sum == arr[i])
            {
                cout<<arr[l]<<" "<<arr[h]<<" "<<arr[i];
                break;
            }

            else if(sum > arr[i])
                h--;
            else
                l++;
        }
    }
    return 0;
}

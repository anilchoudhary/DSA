#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,h,mini,dif,x,y,sum=0;
    n=6;
    x = 25;
    int arr[n] = {1,2,5,6,9,10};
    sort(arr, arr+n);
    for(int i=0;i<n;i++)
    {
        l = i+1;
        h = n-1;
        while(l<h)
        {
            sum = arr[i] + arr[l] + arr[h];
            if(sum < x)
                l++;
            if(sum > x)
                h--;
            if(sum == x)
            {
                cout<<arr[i]<< " "<< arr[l]<< " "<<arr[h];
                break;
            }
        }
    }
    return 0;
}

// peak element = not smaller than neighbors
#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int l, int h, int n)
{
    if(l<=h)
    {
        int m = l + (h-l)/2;
        if((m == 0)||(m == n-1))
            return m;
        if((arr[m-1]<arr[m])&&(arr[m+1]<arr[m]))
            return m;
        if(arr[m-1]>arr[m])
            return bs(arr,l,m-1,n);
        else
            return bs(arr,m+1,h,n);
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {40,30,20,5,3};
    cout<<bs(arr,0,n-1,n);
    return 0;

}

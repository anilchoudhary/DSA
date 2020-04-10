#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,h,mini,dif,x,y,sum=0,flag=0;
    n=6;
    x = 19;
    int arr[n] = {0,3,44,5,9,7};
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
                flag = 1;
                cout<<arr[i]<< " "<< arr[l]<< " "<<arr[h];
                break;
            }
        }
    }
    if(!flag)
        cout<<"not found";
    return 0;
}

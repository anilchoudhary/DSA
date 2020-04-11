// pair whose sum is given X, using two pointer approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=8;
    int arr[n] = {2,4,8,9,11,12,20,30};
    int x = 23;
    int l=0;
    int h=n-1;
    int sum=0;
    while(l<h)
    {
       sum = arr[l] + arr[h];
       if(sum == x)
       {
           cout<<arr[l]<<" "<<arr[h];
           break;
       }
       else if(sum>x)
        h--;
       else
        l++;
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n =5;
    int arr[n] = {-1,0,1,3,5};
    int cnt=0,l,h,x=4,sum=0;
    for(int i=0;i<n-2;i++)
    {
        l=i+1;h=n-1;
        while(l<h)
        {
            sum = arr[i]+arr[l]+arr[h];
            if(sum == x)
            {
                cnt++;
                l++;
                h--;
            }
            else if(sum > x)
                h--;
            else
                l++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

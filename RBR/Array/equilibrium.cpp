#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {7,2,1,4,6,4,0};
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum += arr[i];
    }
    int lsum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum - arr[i];
        if(sum == lsum)
        {
            cout<<i<<endl;
            break;
        }
        lsum += arr[i];
    }
    return 0;
}

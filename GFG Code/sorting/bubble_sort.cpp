#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int flag = 0;
    int arr[n] = {51,45,19,28,35,10,9,0,8,6};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap (arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
        flag = 0;
    }
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

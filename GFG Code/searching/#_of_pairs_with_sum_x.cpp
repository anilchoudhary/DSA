#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0,1,3,5,4};
    int l = 0,sum=0;
    int h = 4;
    int cnt = 0;
    int x = 4;
    while(l<=h)
    {
        sum = arr[l] + arr[h];
        if(sum == x)
            {cnt++;
            l++;h--;}
        else if(sum>x)
            h--;
        else
            l++;
    }
    cout<<cnt<<endl;
    return 0;
}

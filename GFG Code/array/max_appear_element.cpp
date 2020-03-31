#include<bits/stdc++.h>
using namespace std;
int arr[1000];

int maxae(int l[],int r[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[l[i]] += 1;
        arr[r[i]+1] -= 1;
    }
    int maxm = arr[0], res =0;
    for(int i =1;i<1000;i++)
    {
        arr[i] += arr[i-1];
        if(maxm<arr[i])
        {
            maxm = arr[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int l[] = {1,2,3};
    int r[] = {3,5,7};
    int n =3;
    cout<<maxae(l, r, n);
    return 1;
}

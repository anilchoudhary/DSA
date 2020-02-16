#include<bits/stdc++.h>
using namespace std;

int arr[100];

void add(int l,int r,int x)
{
    for(int i=l;i<=r;i++)
    {
        arr[i] += x;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    add(1,5,2);
    add(2,3,10);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

}

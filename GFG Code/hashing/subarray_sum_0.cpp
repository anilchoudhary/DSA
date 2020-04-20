#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={5,6,-4,-2,8,10};
    int psum[n]={0};
    psum[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        psum[i] = psum[i-1] + arr[i];
    }
    unordered_map<int , int> um;
    for(int i =0;i<n;i++)
    {
        um[psum[i]]++;
    }
    int flag=0;
    for(auto i: um)
    {
        if(i.second == 2)
            flag=1;
    }
    if(flag)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n] = {3,4,1,3,3};
    unordered_map<int ,int> um;
    for(int i=0;i<n;i++)
    {
        um[arr[i]]++;
    }
    int m=0;
    for(auto i : um )
    {
        if(i.second > m)
            m = i.second;
    }
    cout<< m<< endl;
    return 0;
}


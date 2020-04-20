#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]= {4,3,1,4,6,6,9,7,7,66,34,37};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=40;
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    {
        if(us.find(arr[i])!=us.end())
        {
            cout<<"yes"<<endl;
            return 0;
        }
        else
        {
            us.insert(x-arr[i]);
        }
    }
    cout<<"no"<<endl;
    return 0;
}

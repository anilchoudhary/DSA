#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={5,6,-4,-2,8,10};
    int presum = 0;
    unordered_set <int> us;
    for(int i=1;i<n;i++)
    {
        presum += arr[i];
        if(us.find(presum)!=us.end())
            {
                cout<<"yes"<<endl;
                return 0;
            }
    }
    cout<<"no"<<endl;

    return 0;
}

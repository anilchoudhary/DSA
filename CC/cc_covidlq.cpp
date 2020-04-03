#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=INT_MAX,flag=1;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
            {
                if(abs(i-x) < 6)
                {
                    flag = 0;
                    break;
                }
                x = i;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        flag = 1;
        x= INT_MAX;
    }
    return 0;
}

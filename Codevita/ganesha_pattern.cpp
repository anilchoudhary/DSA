#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //first component
    cout<<"*";
    for(int i=1;i<=(n-3)/2;i++)
        cout<<" ";
    for(int i=1;i<=(n+1)/2;i++)
        cout<<"*";
    cout<<endl;
    //second component
    for(int j=1;j<=(n-3)/2;j++)
    {
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++)
            cout<<" ";
        cout<<"*"<<endl;
    }

    //third component
    for(int i=1;i<=n;i++)
        cout<<"*";
    cout<<endl;

    //fourth component

    for(int j=1;j<=(n-3)/2;j++)
    {
        for(int i=1;i<=(n-3)/2+1;i++)
            cout<<" ";
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }

    //fifth component

    for(int i=1;i<=(n+1)/2;i++)
        cout<<"*";
    for(int i=1;i<=(n-3)/2;i++)
        cout<<" ";
    cout<<"*";
    cout<<endl;
}

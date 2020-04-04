#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            {cout<<"1"<<"\n"<<"1 1"<<"\n"; continue;}
        if(n==2)
            {cout<<"1"<<"\n"<<"2 1 2"<<"\n"; continue;}
        if(n==3)
            {cout<<"1"<<"\n"<<"3 1 2 3"<<"\n"; continue;}
        if(n==4)
            {cout<<"2"<<"\n"<<"3 1 2 3"<<"\n"<<"1 4"<<"\n"; continue;}
        else
        {
            int x = 4, y = 5;
            cout<<n/2<<"\n";
            cout<<"3 1 2 3"<<"\n";
            n = n - 3;
            while(n>1)
            {
                cout<<"2 "<<x<<" "<<y<<"\n";
                x = x + 2;
                y = y + 2;
                n = n - 2;
            }
            if(n==1)
                cout<<"1 "<<x<<"\n";
        }
    }
    return 0;
}

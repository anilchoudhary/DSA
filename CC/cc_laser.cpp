#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,lly,lry,llx,lrx,up,down;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<q;i++)
        {
            int x1,x2,y,cnt=0;
            cin>>x1>>x2>>y;
            for(int i=x1;i<x2;i++)
            {
                lly=arr[i-1];
                lry=arr[i];
                llx=i-1;
                lrx=i;
                if(lly<lry)
                {
                    down = lly;
                    up = lry;
                }
                else
                {
                    down = lry;
                    up = lly;
                }
                if((llx != x2-1) && (lrx != x1-1) && (down <= y) && (up >= y))
                    cnt++;

            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
}


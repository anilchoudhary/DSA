#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,mx,x,kk,m,j;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>k;
        int arr[n],v[n+5],cn[n+5],kk=0,m=0,mx=0,x=0;
        for(i=0;i<n+5;i++)
        {
            v[i]=0;
            cn[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            cn[arr[i]]++;
            
            if(v[arr[i]]==0)
            {
                kk++;
                v[arr[i]]=1;
            }
            if(kk==k)
            {
                kk--;
                for(j=m;j<i;j++)
                {
                    cn[arr[j]]--;
                    if(cn[arr[j]]==0)
                    {
                        v[arr[j]]=0;
                        break;
                    }
                    
                }
                x=i-j;
                m=j+1;
            }
            else
            {
                x++;
            }
            if(mx<x){mx=x;}
        }
        cout<<mx<<endl;
    }
}

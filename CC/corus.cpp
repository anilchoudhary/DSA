#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,x,ans=0;
        cin>>n>>q;
        int arr[q];
        string s;
        cin>>s;
        int freq[26] = {0};
        for(int i=0;i<q;i++)
            cin>>arr[i];
        for(int i=0;i<s.length();i++)
        {
            x = s[i] - 'a';
            freq[x]++;
        }
        for(int i=0;i<q;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(freq[j]>arr[i])
                {
                    ans = ans + freq[j] - arr[i];
                }
            }
            cout<<ans<<"\n";
            ans = 0;
        }
    }
    return 0;
}

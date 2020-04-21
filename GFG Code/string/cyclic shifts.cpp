#include<bits/stdc++.h>
using namespace std;

 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int m;
        char c;
        cin>>n>>m>>c;
        if(c=='L')
            n = (n<<m)|(n>>(15-m));
        else
            n = (n>>m)|(n<<(15-m));
        cout<<n<<endl;
    }
    return 0;
 }



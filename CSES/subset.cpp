#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int n = 3;

void subset(int k)
{
    if(k==(n+1))
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    else
    {
        v.push_back(k);
        subset(k+1);
        v.pop_back();
        subset(k+1);
    }
}

int main()
{
    subset(1);
    return 0;
}

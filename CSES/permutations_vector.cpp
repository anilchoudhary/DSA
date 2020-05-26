#include<bits/stdc++.h>
using namespace std;

int n = 3;
int chosen[n+1];
vector<int> v;



void permut()
{
    if(v.size() == n)
    {
        for(int j=0;j<v.size();j++)
            cout<<v[j];
        cout<<endl;
    }
    else
    {
        for(int i = 1;i <=n; i++)
        {
            if(chosen[i])
                continue;
            chosen[i] = 1;
            v.push_back(i);
            permut();
            chosen[i] = 0;
            v.pop_back();
        }
    }
}

int main()
{
    permut();
    return 0;
}

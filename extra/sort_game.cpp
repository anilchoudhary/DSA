#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

int main()
{
    int x,n,tmp;
    string str;
    cin>>x>>n;
    vector<pair<string, int> > v;

    for(int i=0;i<n;i++)
    {
        cin>>str>>tmp;
        v.push_back(make_pair(str,tmp));
    }

    sort(v.begin(),v.end(),comparator);
    for(int i=0;i<v.size();i++)
    {
        //if(v[i].second >= x)
            cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;

}

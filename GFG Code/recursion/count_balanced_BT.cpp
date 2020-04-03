#include<bits/stdc++.h>
using namespace std;


int cob(int h)
{

    if(h==1 || h==0)
        return 1;

    int m = pow(10,9) + 7;
    int x = cob(h-1);
    int y = cob(h-2);

    long long int res1 = (long long int)(x*x);
    long long int res2 = (long long int)(x*y*2);

    int ans1 = (int)(res1%m);
    int ans2 = (int)(res2%m);

    int ans = (ans1%m) + (ans2%m);
    return ans;
}

int main()
{
    int h = 4;
    cout<<cob(h)<<endl;
    return 0;
}

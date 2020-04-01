#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 4 ;
    if(x && !(x & (x-1)))
    {
        cout<<"yes, it's power of 2";
    }
    else
        cout<<"it's not power of 2";
    return 1;
}

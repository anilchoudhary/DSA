#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int k = 3;
    if(( (1<<(k-1)) & n) != 0)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 1;
}

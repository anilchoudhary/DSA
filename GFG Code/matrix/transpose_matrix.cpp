#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=3,c=3;
    int mat[r][c] =
    {
        {1,2,3},
        {7,8,9},
        {11,12,13},
    };

    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

}

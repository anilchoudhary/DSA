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

    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
            swap(mat[i][j], mat[j][i]);
    }
    for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                    cout<<mat[i][j]<<" ";
                cout<<endl;
        }
    return 0;
}

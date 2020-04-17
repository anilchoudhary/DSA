#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    int flag=0;
    int arr[n][m] = {
        {'.','.','*','.'},
        {'.','#','.','.'},
        {'*','*','.','.'},
        {'.','#','*','*'},
    };
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int ch = arr[i][j];

            if(s>k)
            {
                if(ch=='.')
                    s -= 2;
                else if(ch=='*')
                    s += 5;
                else
                    break;
                if(j!=m-1)
                    s -= 1;
            }
            else
            {
                flag = 1;
                break;
            }
            //cout<<s<<endl;
        }
    }
    if(!flag)
        cout<<"yes "<<s<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}

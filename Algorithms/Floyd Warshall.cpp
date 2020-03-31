#include <iostream>
#include <conio.h>
#define x 3
using namespace std;
void floyds(int b[][x])
{
    int i, j, k;
    for (k = 0; k < 7; k++)
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < x; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
        for (j = 0; j < x; j++)
        {
            cout<<b[i][j]<<"\t";
        }
 
    }
}
int main()
{
	int b[x][x];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < x; i++)
    {
        cout<<"enter values for "<<(i+1)<<" row"<<endl;
        for (int j = 0; j < x; j++)
        {
            cin>>b[i][j];
        }
    }
    floyds(b);
    getch();
}

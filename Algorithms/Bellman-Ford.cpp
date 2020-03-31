#include<bits/stdc++.h>
using namespace std;
int n;
Bellman_Ford(int k, int A[5][5], int B[7][5], int n){
    int i,j;
    for(i=0;i<n;i++){
        B[k+1][i]=B[k][i];
        for(j=0;j<n;j++){
            if(B[k+1][i]>A[j][i]+B[k][j])
            	B[k+1][i]=A[j][i]+B[k][j];
        }
    }
    if(k<n)
        Bellman_Ford(k+1,A,B,n);
}

int main()
{
    int i,j,k,a;
    cout<<"Please enter the number of vertices:";
	cin>>n;
	int A[5][5],B[7][5];
    cout<<"\nPlease enter the value of Adjacency Matrix:\n";
    for(i=0;i<n;i++)
	{
     	for(j=0;j<n;j++)
		{
            cin>>A[i][j];
        }
    }
    //Printing the adjacency Matrix:
    cout<<"\nPrinting the adjacency Matrix:\n";
    for(i=0;i<n;i++)
	{
        cout<<"\n";
        for(j=0;j<n;j++)
		{
            cout<<A[i][j]<<" ";
        }
    }
    cout<<"\nPlease enter the Source vertex number:";
    cin>>a;

    /*Calculation for the first vertex*/
    B[0][0]=a-1;
    B[1][0]=0;
    for(j=1;j<n;j++)
	{
        if(j>a-1)
            B[0][j]=j;
        else
            B[0][j]=j-1;
    }
    for(j=1;j<n;j++)
        B[1][j]=99;

    Bellman_Ford(1,A,B,n);

    cout<<"\nThe Recursive Iterations are:";
    for(i=0;i<n+2;i++){
        cout<<"\n\n";
        for(j=0;j<n;j++){
            cout<<B[i][j]<<" ";
        }
        if(i==1)
            cout<<"\t#Initialization.";
        else if(i!=0)
            cout<<"\t#Iteration no. "<<i-1;
    }
    for(i=0;i<n;i++){
        if(B[n+1][i]!=B[n][i]){
            cout<<"\n WARNING --<ERROR>--!!!: There is a negative edge-cycle in this graph. Correct it and run again.";
            return 0;
        }
    }
    cout<<"\nThe answer is:\n";
    for(i=1;i<n;i++)
       cout<<"\nWeight of vertex no. "<< B[0][i]+1 << " is "<<B[n+1][i];
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

void main()
{
  FILE *fp;
  int row,col,i,j,edges,nodes;
  char ch;
  int mat[MAX][MAX];

  fp=fopen("matrix.txt","r");

  row=col=0;

  while(fscanf(fp,"%c",&ch)!=EOF)
  {
     if(ch==' ')
       col++;
     else if(ch=='\n')
     {
       row++;
       col=0;
     }
     else
       mat[row][col]=ch-48;
   }

fclose(fp);

printf("\nThe given adjacency matrix is : \n");

for(i=0;i<=row;i++)
{
  for(j=0;j<=col;j++)
    printf("%d\t",mat[i][j]);
  printf("\n");
}

nodes=row+1;
printf("\nNumber of nodes = %d",nodes);

edges=0;

for(i=0;i<=row;i++)
{
  for(j=0;j<=col;j++)
  {
    if(mat[i][j]==1)
      edges++;
  }
}
printf("\nNumber of edges = %d",edges);
printf("\n\nCyclometic Complexity of graph  = edges-nodes+2p\n");
printf("\t\t\t\t= %d - %d + 2",edges,nodes);
printf("\n\t\t\t\t= %d",edges-nodes+2);


getch();
}

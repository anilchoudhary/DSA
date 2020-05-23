#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define square(x) x*x

main()
{
   int i=5;
   printf(("%d%d%d%d%d", i++,i--,++i,--i,i));
   getch();
}

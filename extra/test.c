#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// #define square(x) x*x


int main(void)
{
    union a
    {
        int i;
        char ch[5];
    };

    union a z;
    z.i = 512;
    printf("%d%d",z.ch[2], z.ch[51] );

}



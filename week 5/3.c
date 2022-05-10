#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x[] = {1,2,3,4};
    int y[] = {3,4,5,6};
    Mul(x,y);
}

void Mul(int *x,int *y)
{
    int mul[4];
    for(int i=0;i<4;i++)
    {
        mul[i]=x[i]*y[i];
        printf("%d\n", mul[i]);
    }
}

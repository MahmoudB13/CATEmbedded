#include <stdio.h>
#include <stdlib.h>
#define X 10
int y=X+10;
#define X 20
int z=X;
void main()
{
    printf("%d %d",y,z);
}


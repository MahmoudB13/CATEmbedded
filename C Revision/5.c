#include <stdio.h>
#include <stdlib.h>

int Max(int x,int y,int z, int m)
{
    int max= x;
    if (y>max) max=y;
    if (z>max) max=z;
    if (m>max) max=m;
    return max;
}

int Min(int x,int y,int z, int m)
{
    int min= x;
    if (y<min) min=y;
    if (z<min) min=z;
    if (m<min) min=m;
    return min;
}

int main()
{
    printf("%d \n",Max(7,6,5,8));
    printf("%d",Min(7,6,5,8));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x[] = {9,4,6,31,9,8};
    int *p = x;
    Sort(x);
    for(int i=0;i<6;i++)
    {
        printf("%d ",*(x+i));
    }

}

void Sort(int *x)
{
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
           if( *(x+j) < *(x+i))
           {
              int tmp = *(x+i);
              *(x+i) = *(x+j);
              *(x+j) = tmp;
           }
        }
    }
}

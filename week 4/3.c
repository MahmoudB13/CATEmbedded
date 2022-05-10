#include <stdio.h>
#include <stdlib.h>

void main()
{
   printf("enter number of elements\n");
   int x,i,j;
   scanf("%d",&x);
   int arr[x];
   printf("enter elements\n");
   for(i=0;i<x;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<x;i++)
   {
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                break;
            }
        }
            if(i==j)
            {
                printf("%d ",arr[i]);
            }
    }
}



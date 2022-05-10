#include <stdio.h>
#include <stdlib.h>
int x,i,j;
void repeating(int arr[x])
{
   for(i=0;i<x;i++)
   {
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }
}
void main()
{
   printf("enter number of elements\n");

   scanf("%d",&x);
   int arr[x];
   printf("enter elements\n");
   for(i=0;i<x;i++)
   {
       scanf("%d",&arr[i]);
   }
   repeating(arr);
}



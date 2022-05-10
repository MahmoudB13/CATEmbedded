#include <stdio.h>
#include <stdlib.h>

void main()
{
   printf("enter number of elements\n");
   int x,i;
   scanf("%d",&x);
   int arr[x];
   printf("enter elements\n");
   for(i=0;i<x;i++)
   {
       scanf("%d",&arr[i]);
   }
   int max=arr[0];
   for(i=0;i<x;i++)
   {
       if (arr[i]>max)
       {
           max = arr[i];
       }
   }
   int second = 0;
   for(i=0;i<x;i++)
   {
       if(arr[i] == max)
       {
           continue;
       }
       else if (arr[i]>second)
       {
           second = arr[i];
       }
   }
   printf("second max ix %d",second);
}



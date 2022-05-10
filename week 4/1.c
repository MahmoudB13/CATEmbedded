#include <stdio.h>
#include <stdlib.h>

void main()
{
   printf("enter number of elements\n");
   int x;
   scanf("%d",&x);
   int arr[x];
   printf("enter elements\n");
   for(int i=0;i<x;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0; i<x; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr[j] <arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("Enter 0 for ascending or Enter 1 for descending.\n");
    int input;
    scanf("%d",&input);
    if(input==0)
    {
        printf("ascending order: ");
        for(int i=0;i<x;i++)
          {
              printf("%d ",arr[i]);
          }
    }
    else
    {
        printf("descending order: ");
        for(int i=x-1;i>=0;i--)
          {
              printf("%d ",arr[i]);
          }
    }
}



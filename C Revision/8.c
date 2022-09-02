#include <stdio.h>
#include <stdlib.h>

void Get_Max_Min(int arr[],int size,int *max,int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i=0; i<size; i++)
    {
        if(*max < arr[i])
           *max = arr[i];
        else if(*min > arr[i])
           *min = arr[i];
    }
    printf("Max: %d\n",*max);
    printf("Min: %d",*min);
}

int main()
{
    int size,min,max;;
    printf("enter size of array ");
    scanf("%d",&size);
    int *ptr = (int*)malloc(size * sizeof(int));
    printf("enter elements ");
    for (int i=0; i<size; i++)
    {
        scanf("%d",(ptr+i));
    }

    Get_Max_Min(ptr,size,&max,&min);
    return 0;
}

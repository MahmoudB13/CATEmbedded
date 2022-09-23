#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *arr,int num)
{
    for(int j=0;j<num-1;j++)
    {
        for(int i=0;i<num-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        printf("%d  ",*(arr+i));
    }
}

int main()
{
    int num;
    printf("Enter number of elements ");
    scanf("%d",&num);
    int* arr = (int*) malloc(num*sizeof(int));
    for(int i =0;i<num;i++)
    {
        scanf("%d",arr+i);
    }
    BubbleSort(arr,num);
    return 0;
}

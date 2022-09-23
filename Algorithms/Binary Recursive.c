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
        printf("%d ",*(arr+i));
    }
}

int BinarySearch(int* arr,int low,int high,int element)
{
    while(low<=high)
    {
        int mid =low+(high-low)/2;
        if(element== *(arr+mid)) return mid;
        else if(element< *(arr+mid)) return BinarySearch(arr,low,mid-1,element);
        else return BinarySearch(arr,mid+1,high,element);
    }
    return -1;
}

int main()
{
    int num,element;
    printf("Enter number of elements ");
    scanf("%d",&num);
    int* arr = (int*) malloc(num*sizeof(int));
    for(int i =0;i<num;i++)
    {
        scanf("%d",arr+i);
    }
    BubbleSort(arr,num);
    printf("Enter element ");
    scanf("%d",&element);
    int low=0, high=num-1;
    printf("index is %d",BinarySearch(arr,0,num-1,element));
    return 0;
}

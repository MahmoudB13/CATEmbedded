#include <stdio.h>
#include <stdlib.h>
void Delete(int arr[],int index,int size)
{
    if(index>size-1) printf("index doesn't exist");
    else
    {
        for(int i=0;i<size;i++)
        {
            if(i<index) continue;
            else arr[i]=arr[i+1];
        }
    arr[size-1]=0;
    for(int j=0;j<size-1;j++) printf("%d ",arr[j]);
    }
}
int main()
{
    int num,index;
    printf("Enter number of elements of the array ");
    scanf("%d",&num);
    int* arr = (int*) malloc(num*sizeof(int));
    printf("Enter elements of the array\n");
    for(int i =0;i<num;i++)
    {
        scanf("%d",arr+i);
    }
    printf("enter the index to be deleted ");
    scanf("%d",&index);
    Delete(arr,index,num);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[],int start,int middle,int end)
{
    int i,j,k;
    int n1 = middle - start +1;
    int n2 = end - middle;
    int arr1[n1];
    int arr2[n2];

    for(i=0;i<n1;i++) arr1[i]=arr[start+i];
    for(j=0;j<n2;j++) arr2[j]=arr[middle+j+1];

    i=j=0;
    k=start;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i]; i++;
        }
        else
        {
            arr[k]=arr2[j]; j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++; k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++; k++;
    }

}

void MergeSort(int* arr,int start,int end)
{
    if(start<end)
    {
        int middle = start + (end-start)/2;
        MergeSort(arr,start,middle);
        MergeSort(arr,middle+1,end);
        Merge(arr,start,middle,end);
    }
}

int main()
{
    int num;
    printf("Enter number of elements of the array ");
    scanf("%d",&num);
    int* arr = (int*) malloc(num*sizeof(int));
    printf("Enter elements of the array\n");
    for(int i =0;i<num;i++)
    {
        scanf("%d",arr+i);
    }
    MergeSort(arr,0,num-1);
    for(int i=0;i<num;i++)
    printf("%d ",*(arr+i));
    return 0;
}

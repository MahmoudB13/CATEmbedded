#include <stdio.h>
#include <stdlib.h>

void Merge(int* arr1,int num1,int* arr2,int num2, int* result)
{
    int i=0,j=0,k=0;
    while(i<num1 && j<num2)
    {
        if(arr1[i]<arr2[j])
        {
            result[k]=arr1[i]; i++;
        }
        else
        {
            result[k]=arr2[j]; j++;
        }
        k++;
    }
    while(i<num1)
    {
        result[k]=arr1[i];
        i++; k++;
    }
    while(j<num2)
    {
        result[k]=arr2[j];
        j++; k++;
    }

}


int main()
{
    int num1,num2;
    printf("Enter number of elements of first array ");
    scanf("%d",&num1);
    int* arr1 = (int*) malloc(num1*sizeof(int));
    printf("Enter elements of first array\n");
    for(int i =0;i<num1;i++)
    {
        scanf("%d",arr1+i);
    }

    printf("Enter number of elements of second array ");
    scanf("%d",&num2);
    int* arr2 = (int*) malloc(num2*sizeof(int));
    printf("Enter elements of second array\n");
    for(int i =0;i<num2;i++)
    {
        scanf("%d",arr2+i);
    }
    int* result =(int*) malloc((num1+num2)*sizeof(int));
    Merge(arr1,num1,arr2,num2,result);

    for(int count=0;count<num1+num2;count++)
    {
        printf("%d ",*(result+count));
    }
    return 0;
}

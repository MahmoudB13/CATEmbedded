#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size,odd=0,even=0;
    printf("enter size of array ");
    scanf("%d",&size);
    int *ptr = (int*)malloc(size * sizeof(int));
    printf("enter elements ");
    for (int i=0; i<size; i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0; i<size; i++)
    {
        if(ptr[i]%2==0) even++;
        else odd++;
    }
    printf("odd numbers: %d\n",odd);
    printf("even numbers: %d",even);
    return 0;
}

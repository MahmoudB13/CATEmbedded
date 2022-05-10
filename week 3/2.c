#include <stdio.h>
#include <stdlib.h>

int num1 =10;
int num2 =20;

void Swap(int *num1,int *num2)
{
    int swap;
    swap = *num1;
    *num1 = *num2;
    *num2 = swap;
}

int main()
{
    Swap(&num1,&num2);
    printf("%d %d",num1,num2);
    return 0;
}


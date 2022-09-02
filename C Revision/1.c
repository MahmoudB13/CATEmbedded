#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,ones=0,zeroes=0;
    printf("enter a number ");
    scanf("%d",&num);
    for(int i=0;i<8*sizeof(int);i++)
    {
        if(num%2==1) ones++;
        else zeroes++;
        num = num/2;
    }
    printf("number of zeroes: %d\n",zeroes);
    printf("number of ones: %d",ones);
    return 0;
}

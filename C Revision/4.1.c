#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf("enter a number ");
    scanf("%d",&num);
    while(num)
    {
        sum += num%10;
        num /= 10;
    }

    printf("sum is %d",sum);

    return 0;
}

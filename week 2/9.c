#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a number\n");
    int num;
    scanf("%d",&num);
    int fact=1;
    while(num!=0)
    {
        fact*=num;
        num--;
    }
    printf("%d",fact);
    return 0;
}

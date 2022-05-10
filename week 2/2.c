#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a number\n");
    int number;
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else
    {
        printf("%d is odd",number);
    }

    return 0;
}

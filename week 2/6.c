#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the result of 3*4\n");
    int res;
    scanf("%d",&res);
    while(res!=12)
    {
        printf("try again\n");
        scanf("%d",&res);
    }
    printf("thanks");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a number\n");
    int num;
    scanf("%d",&num);

    for(int i=1;i<=12;i++)
    {
        printf("%d*%d=%d \n",i,num,num*i);
    }
    return 0;
}

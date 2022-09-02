#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power,result=1;
    printf("enter a number ");
    scanf("%d",&num);
    printf("enter power ");
    scanf("%d",&power);
    while(power)
    {
        result*=num;
        power--;
    }

    printf("result is %d",result);

    return 0;
}

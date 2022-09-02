#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,num,decimal=0,temp;
    printf("enter a number ");
    scanf("%d",&num);
    while(num)
    {
        temp=(num%10)*i;
        decimal+=temp;
        num/=10;
        i*=2;
    }
    printf("%d",decimal);
    return 0;
}

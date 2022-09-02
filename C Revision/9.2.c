#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,order;
    printf("enter a number ");
    scanf("%d",&num);
    printf("enter bit order ");
    scanf("%d",&order);
    int res=0;
    if(num = num & (1 << order)) res=1;
    printf("%d",res);
    return 0;
}

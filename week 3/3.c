#include <stdio.h>
#include <stdlib.h>

int Count(int num)
{
    int count = 0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    return count;
}

int main()
{
    int num = Count(12345);
    printf("%d",num);
    return 0;
}


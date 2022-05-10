#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your hours\n");
    int hours, salary;
    scanf("%d",&hours);
    if(hours<40)
    {
        salary = hours *50;
        salary *= 0.9;
        printf("%d", salary);
    }
    else
    {
        salary = hours *50;
        printf("%d", salary);
    }
    return 0;
}

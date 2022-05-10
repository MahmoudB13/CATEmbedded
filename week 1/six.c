#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter two numbers\n");
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d \n", x+y); //arthimetic
    printf("%d \n", x && y); //logical
    printf("%d \n", x | y); //bitwise
    return 0;
}

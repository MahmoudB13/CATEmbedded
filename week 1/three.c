#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number \n");
    float x;
    scanf("%f",&x);
    x = x +0.05*x;
    printf("%f",x);
    return 0;
}

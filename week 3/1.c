#include <stdio.h>
#include <stdlib.h>
int Get_Max(int num1,int num2)
{
    if(num1<num2)
        return num2;
    else
        return num1;
}

int main()
{
    int num1,num2;
    printf("enter two numbers\n");
    scanf("%d %d", &num1,&num2);
    printf("%d is max",Get_Max(num1,num2));
    return 0;
}


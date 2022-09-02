#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operand;
    float result,num1,num2;
    printf("enter an operand ");
    scanf("%c",&operand);
    printf("enter first number ");
    scanf("%f",&num1);
    printf("enter second number ");
    scanf("%f",&num2);

    switch(operand)
    {
        case '+': result=num1+num2;
        break;
        case '-': result=num1-num2;
        break;
        case '*': result=num1*num2;
        break;
        case '/': result=num1/num2;
        break;
    }

    printf("%f",result);
    return 0;
}

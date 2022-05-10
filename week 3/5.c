#include <stdio.h>
#include <stdlib.h>

void fib(int num)
{
    int term1 =0;
    int term2 =1;
    for(int i=0;i<num;i++)
        {
            printf("%d ",term1);
            int fib = term1 + term2;
            term1 = term2;
            term2 = fib;
        }
}

int main()
{
    fib(8);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter ten numbers\n");
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int sum = a+b+c+d+e+f+g+h+i+j;
    printf("%d\n",sum);
    float avg = sum/10.0;
    printf("%f",avg);
    return 0;
}

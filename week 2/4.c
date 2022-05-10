#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your grade\n");
    int grade;
    scanf("%d",&grade);
    if(grade<50) {printf("FAIL");}
    else if(grade<65) {printf("PASS");}
    else if(grade<75) {printf("GOOD");}
    else if(grade<85) {printf("VERY GOOD");}
    else {printf("EXCELLENT");}
    return 0;
}

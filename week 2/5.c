#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter three numbers\n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
            printf("%d is the max",x);
        }
        else printf("%d is the max",z);
    }
    else
        {
            if(y>z)
            {
                printf("%d is the max",y);
            }
            else printf("%d is the max",z);
        }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user = 1234,pass = 4567;
    printf("enter user\n");
    int user_id,user_pass,flag,flag1=0;
    scanf("%d",&user_id);
    switch(user_id)
    {
        case 1234: flag = 1;
        break;
        default: printf("wrong id");
    }
    if(flag==1)
    {
    printf("enter your password\n");
    scanf("%d",&user_pass);

    for(int i=0;i<2;i++)
    {
        switch(user_pass)
        {
            case 4567: {printf("welcome");flag1=1;}
            break;
            default: printf("your'e not registered\n");
            printf("enter your password\n");
            scanf("%d",&user_pass);
        }
        if(flag1) break;
    }
    }
    return 0;
}

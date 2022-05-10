#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your id\n");
    int id;
    scanf("%d",&id);
    switch(id)
    {
        case 1234: printf("Harry");
        break;
        case 5678: printf("Ron");
        break;
        case 1145: printf("Hermione");
        break;
        default: printf("wrong id");
    }

    return 0;
}

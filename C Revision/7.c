#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[100], cpy[100], i;
    printf("Enter string: ");
    gets(str);

    for (i=0; str[i]!='\0';i++)
    {
        cpy[i] = str[i];
    }

    cpy[i] = '\0';
    printf("%s", cpy);
    return 0;
}

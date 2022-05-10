#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter number of rows\n");
    int rows;
    scanf("%d",&rows);
    for(int i = 1; i <= rows; i++) {
      for(int j = 1; j <= rows-i; j++)
         printf(" ");

      for(int j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }
    return 0;
}

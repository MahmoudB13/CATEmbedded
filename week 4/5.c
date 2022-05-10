#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j;
    int arr[5][5];
    for(i=0;i<5;i++)
    {   printf("enter row %d\n",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<5;i++)
    { int row_sum = 0;
        for(j=0;j<5;j++)
        {
            row_sum += arr[i][j];
        }
        printf("%d ",row_sum);
    }
    printf("\n");
    for(j=0;j<5;j++)
    { int col_sum = 0;
        for(i=0;i<5;i++)
        {
            col_sum += arr[i][j];
        }
        printf("%d ",col_sum);
    }
}



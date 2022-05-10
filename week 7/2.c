#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct student{
    int ID;
    int programming;
    int data_structure;
    int Discrete;
    int algorithm;
}student;


void main()
{
    struct student num[10]=
    {
        {1,85,46,78,93},
        {2,45,79,32,48},
        {3,79,98,54,75},
        {4,45,96,53,48},
        {5,48,75,68,75},
        {6,86,83,94,72},
        {7,87,75,77,48},
        {8,36,10,84,75},
        {9,42,98,35,48},
        {10,10,20,30,40}
    };
    int flag = 1,x;
    while(flag == 1)
    {
        printf("enter user id ");
        scanf("%d",&x);
        if(x>10 || x==0)
            {printf("wrong id\n");}

        else
            {for(int i=1;i<=10;i++)
                {
                    if(i==(x-1))
                    {
                        printf("programming %d\n",num[i].programming);
                        printf("data structure %d\n",num[i].data_structure);
                        printf("discrete %d\n",num[i].Discrete);
                        printf("algorithms %d\n",num[i].algorithm);
                    }
                }
            }
            printf("if you want to continue press 1 else press 0 \n");
            scanf("%d",&flag);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 typedef struct employee
{
    int salary;
    int bonus;
    int deduction;
}employee;

int Total(employee x)
{
    int total = x.salary+x.bonus-x.deduction;
    return total;
}

void main()
{
    employee Mohsen;
    printf("enter salary, bonus and deductions\n");
    scanf("%d %d %d",&Mohsen.salary,&Mohsen.bonus,&Mohsen.deduction);

    employee Maged;
    printf("enter salary, bonus and deductions\n");
    scanf("%d %d %d",&Maged.salary,&Maged.bonus,&Maged.deduction);

    employee Mariam;
    printf("enter salary, bonus and deductions\n");
    scanf("%d %d %d",&Mariam.salary,&Mariam.bonus,&Mariam.deduction);

    printf("total salary for mohsen is %d\n",Total(Mohsen));
    printf("total salary for maged is %d\n",Total(Maged));
    printf("total salary for mariam is %d\n",Total(Mariam));


}

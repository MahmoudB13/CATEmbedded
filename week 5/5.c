#include <stdio.h>
#include <stdlib.h>

void main()
{
   int x=1,y=2,z=3;
   int *px,*py,*pz;
   px=&x; py=&y; pz=&z;
   printf("%d %d %d %d %d %d %d %d %d ",x,y,z,px,py,pz,*px,*py,*pz);
   //first three will print the value of the variables, as well as the last three, while the pointers without * will print the address of the variable.
   printf("Swapping pointers");
   pz=px; px=py; py=pz;
   //pz will contain address of x, px will contain address of y, py will contain address of x
   printf("%d %d %d %d %d %d %d %d %d ",x,y,z,px,py,pz,*px,*py,*pz);
   //first three remains unchanged, last three will print the value of y then x then x
}

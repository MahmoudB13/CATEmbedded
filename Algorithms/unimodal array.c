#include <stdio.h>
#include <stdlib.h>

int Get_max(int arr[],int l,int r)
{
    int m=l+(r-l)/2;
    if(arr[m]>arr[m+1] && arr[m]>arr[m-1]) return arr[m];
    else if(arr[m]>arr[m+1] && arr[m]<arr[m-1]) Get_max(arr,l,m);
    else Get_max(arr,m,r);
}

int main()
{
    int arr[11]={4,5,8,9,10,11,19,7,3,2,1};
    printf("%d",Get_max(arr,0,9));
    return 0;
}

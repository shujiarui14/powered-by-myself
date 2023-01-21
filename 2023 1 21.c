#include <stdio.h>
#include <string.h>
int serch(int arr[],int x,int number)
{
    number--;
    int left=0,right=number,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
     if(arr[mid]<x)
     {
      left=mid+1;
     
     }
     else if(arr[mid]>x)
     {
        right=mid-1;
     }
     else
     return mid;
     
    }
    return 1;
}


int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    scanf("%d",&k);
    int number=sizeof(arr1)/4;
    int ret=serch(arr1,k,number);
    
    if(ret==1)
    {
        printf("can not find it\n");
    }
    else
    {
        printf("find it %d\n",ret);
    }
    return 0;
}
// #include "my_head.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void daofang(int arr[],int x,int y)
{
    int i=0,j=x-1,k=y-1;
    int tmp;
    while(j<=k)
    {
        tmp=arr[j];
        arr[j]=arr[k];
        arr[k]=tmp;
        j++;
        k--;
    }
}
int main()
{
    int i,j;
    printf("你要倒放第几位到第几位？（支持1——20位）\n");
    scanf("%d %d",&i,&j);
    int arr[20]={};
    int k=0;
    srand((unsigned)time(NULL));
    while(k<20)
    {
        arr[k]=rand();
        printf("%d  ",arr[k]);
        k++;
    }
    printf("\n");
    daofang(arr,i,j);
    for(i=0;i<20;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
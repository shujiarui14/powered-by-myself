/*数组倒序存放*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define N 6
int main()
{
    int arr[N]={};
    srand((unsigned)time(0));
    int i=0,j=N-1;
    int tmp;
    printf("随机生成%d个数为：",N);
    for(;i<N;i++)
    {
        arr[i]=rand();
        printf("%d  ",arr[i]);
    }
    // printf("j=%d\n",j);


    // printf(" arr[j]=%d  %d",arr[j],arr[4]);
    for(i=0;i<N/2;i++)
    {
    tmp=arr[i];
    arr[i]=arr[j];
    // printf("i=%d arr[i]=%d\n",i,arr[i]);
    arr[j]=tmp;
    j--;
    }
    printf("\n\n     倒叙存放为：");
    for(i=0;i<N;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;
}
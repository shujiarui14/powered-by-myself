#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int main()
{
    float arr[10]={};
    srand((unsigned)time(0));
    int i=0,j=0,tmp=0;
    float max=INT_MIN,mini=INT_MAX;
    int loction1,loction2;
    float sum,arv;
    for(;i<10;i++)
    {
        arr[i]=rand();
        printf("%g   ",arr[i]);
        sum+=arr[i];
        if(max>arr[i])
        {
            max=max;
        }
        else
        {
            max=arr[i];
            loction1=i;
        }
        if(mini<arr[i])
        {
            mini=mini;
        }
        else
        {
            mini=arr[i];
            loction2=i;
        }
    }
    arv=sum/i;
    printf("\n");
    printf("最大值为：%g（位置是%d） 最小值为：%f（位置是：%d）  和为：%g  平均值为：%g\n",max,loction1+1,mini,loction2+1,sum,arv);
    printf("其中大于平均数的值有：");

    for(j=0;j<10;j++)
    {
        if(arr[j]>arv)
        {
            printf("%g   ",arr[j]);
            tmp++;

        }
    }
    printf("共%d个\n",tmp);
    
    return 0;
}
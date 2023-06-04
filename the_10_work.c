#include "my_head_10.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*倒放i_j之间的数*/
/*int main()
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
}*/

/*用函数对数组排序*/
/*
#define N 20
int main()
{
    int i=0;
    int arr[N]={0};
    srand((unsigned)time(NULL));
    printf("随机生成%d个数：",N);
    while(i<20)
    {
        arr[i]=rand();
        printf("%d  ",arr[i]);
        // printf("%d  " ,i);
        i++;
    }
    paixu1(arr,N);
    printf("\n对%d个数排序如下：",N);
    for(i=0;i<N;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}*/



// int main()
// {
//     int r,arr[50];
//     int target;
//     int i=0;
//     printf("输入你要转换成几进制的？（二，八，十六可选-输入阿拉伯数）和需要转换的数\n");
//     while(1)
//     {
//         scanf("%d %d",&r,&target);
//         if(r==2||r==8||r==16)
//         break;
//         else
//         printf("不能转换成%d进制数，请重新输入！！\n",r);
//     }
//     int tmp=jinweizhizhuanhuan(arr,r,target);
//     // printf("tmp=%d\n",arr[3]);
//     printf("转换成%d进制为：",r);
//     for(i=tmp-1;i>=0;i--)
//     {
//         if(arr[i]>=10)
//         {
//             printf("%c",arr[i]);
//         }
//         else
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//输出各种进制
/*
#define N 50
int main()
{
    int arr[N];
    int n;
    int i=0;
    printf("请输入一个数\n");
    scanf("%d",&n);
    printf("转换为二进制为：");
    int tmp=erjinzhi(arr,n);
    for(i=tmp-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n转换为八进制为：");
    tmp=bajinzhi(arr,n);
    for(i=tmp-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n转换为十六进制为：");
    tmp=shiliujinzhi(arr,n);
    for(i=tmp-1;i>=0;i--)
    {
        if(arr[i]>=10)
        {
            printf("%c",arr[i]);
        }
        else
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}*/


// #define N 20
// int main()
// {
//     int arr[N]={0};
//     int i=0,j=0;
//     srand((unsigned)time(NULL));
//     printf("随机生成%d个数：",N);
//     for(;i<N;i++)
//     {
//         arr[i]=rand();
//         printf("%d  ",arr[i]);
//     }
//     jiou(arr,N);
//     printf("\n\n数组前偶后奇为：");
//     for(i=0;i<N;i++)
//     {
//         printf("%d  ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//合并两个有序数组
/*
#define N 5
#define M 5
#define E 50
int main()
{
    int i=0,j=0;
    int arr[N],array[M],target[E];
    srand((unsigned)time(0));
    printf("随机生成两个有序数组：\n");
    for(;i<N,j<M;i++,j++)
    {
        arr[i]=rand(),array[j]=rand();
        // printf("%d ",array[j]);
    }
    printf("\n");
    paixu1(arr,N);
    paixu1(array,M);
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(j=0;j<M;j++)
    {
        printf("%d ",array[j]);
    }
    printf("\n");
    int a=sizeof(arr)/sizeof(arr[0]),b=sizeof(array)/sizeof(array[0]);
    zuheshuzu(arr,array,target,a,b);
    paixu1(target,N+M);
    printf("\n");
    printf("对两个数组进行合并并排序为：\n");
    for(i=0;i<N+M;i++)
    {
        printf("%d  ",target[i]);
    }
    printf("\n\n");
    return 0;
}*/

//上三角矩阵求和
/*
int main()
{
    int arr[row][col]={0};
    int i=0,j=0;
    srand((unsigned)time(NULL));
    printf("随机生成一个%d*%d的矩阵：\n",row,col);
    for(;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr[i][j]=rand();
            printf("%5d  ",arr[i][j]);
        }
        printf("\n");
    }
    long sum=shangsanjiao(arr,row,col);
    printf("上三角矩阵的和为：%d\n",sum);

    return 0;
}*/


int main()
{
    int n,i=1;
    printf("你要输出多少项？\n");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        printf("第%d项为：%d\n",i,fib(i));
    }
    return 0;
}
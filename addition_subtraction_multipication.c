#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int outfunc1()
{
    int x=0;
    while(1)
    {
        x=rand();
        if(x>=0&&x<100)
        {
            break;
        }
    }
    return x;
}
int outfunc2()
{
    int y=0;
    while(1)
    {
        y=rand();
        if(y>=0&&y<3)
        {
            break;
        }
    }
    return y;
}
int main()
{
    int arr[N]={0};
    int i=0,j=0;
    int tmp=0,m,sum;
    int array[N]={0};
    srand((unsigned)time(0));
    for(;i<10;i++,j++)
    {
        arr[i]=outfunc1();
        // printf("%d  ",arr[i]);
        array[j]=outfunc1();
        tmp=outfunc2();
        printf("第%d道题：",i+1);
        switch (tmp)
        {
            case 0:
            printf("%d+%d=",arr[i],array[j]);
            sum=arr[i]+array[j];
            break;

            case 1:
            printf("%d-%d=",arr[i],array[j]);
            sum=arr[i]-array[j];
            break;

            case 2:
            printf("%d*%d=",arr[i],array[j]);
            sum=arr[i]*array[j];
            break;
        default:
            break;
        }

        scanf("%d",&m);
        if(sum==m)
        {
            printf("恭喜，你算对了\n");
        }
        else
        {
            printf("你算错了，正确答案是%d\n",sum);
        }
    }
    return 0;
}
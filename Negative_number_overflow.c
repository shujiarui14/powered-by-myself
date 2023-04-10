#include <stdio.h>
int jiechen(int x)
{
    int sum=1;
    while(x!=1)
    {
        sum=sum*x;
        x--;
    }
    return sum;
}
int fushu(int x)
{
    int i,tmp;
    while (1)
    {
        i++;
        if(i<=0)
        break;
    }
    tmp=i-1;
    int n=1;
    int target=1;
    while(target<=tmp)
    {
        printf("当n=%d n的阶乘=%d\n",n,target);
        n++;
        target=(target*n);
        if(target<0)
        break;
        
    }
    return n;
    
}
int main()
{
    int n;
    int sum;
    int tmp;
    printf("你想计算多少的阶乘?\n");
    scanf("%d",&n);
    sum=jiechen(n);
    printf("n的阶乘是sum=%d\n",sum);

    printf("\n");
    printf("******************以下是计算当n取多少时会超出int类型的取值范围，出现负数******************\n");
    tmp=fushu(n);
    printf("\n");
    printf("当n=%d的时候n的阶乘第一次出现负数（n为int类型）\n",tmp);
    return 0;
}
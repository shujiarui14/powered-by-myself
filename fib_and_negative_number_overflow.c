#include <stdio.h>

int fib(int x)
{
    int i=0;
    int a=1,b=1;
    int tmp;
    printf("第1项为%d\n",a);
    printf("第2项为%d\n",b);
    for(i=1;i<x-1;i++)
    {
        tmp=a+b;
        a=b;
        b=tmp;
        printf("第%d项为%d\n",i+2,tmp);
        if(tmp<0)
        return i+2;
    }   
}
int fib1(int x)
{
    int i=3;
    int a=1,b=1;
    int tmp;
    printf("第1项为%d\n",a);
    printf("第2项为%d\n",b);
     while(1)
     {
        tmp=a+b;
        a=b;
        b=tmp;
        
        printf("第%d项为%d\n",i,tmp);
        if(tmp<0)
        break;
        i++;
     }
     return i;

}


int main()
{
    int n;
    int tmp;
    int i=3;
    printf("你想计算多少项？n>=2\n");
    scanf("%d",&n);
    printf("前%d项的每一项如下\n\n",n);
    fib(n);

    printf("\n\n");
    printf("************以下是计算当n取何值时会出现负数（n为int类型）************\n");
    tmp=fib1(i);
    printf("当n=%d项时开始出现负数\n",tmp);
    return 0;
}
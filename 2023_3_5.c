#include <stdio.h>
int main()
{
    int a=100;
    int b=&a;//不能用整型变量储存地址
    int *p=b;
   
    printf("b=%d\n",b);
    printf("*p=%d\n",*p);
    printf("%d",&a);
    return 0;
    
}
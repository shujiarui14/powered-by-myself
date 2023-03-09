#include <stdio.h>

int jiechen(int n);
int main()
{
    printf("请输入需要计算的阶乘\n");
    int a=0;
   
    scanf("%d",&a);

    int target=jiechen(a);
     printf("%d的阶乘是%d\n",a,target);
}
int jiechen(int n)
{
   if(n==0||n==1)
   {
    return 1;
   }
   return jiechen(n-1)*n;
}


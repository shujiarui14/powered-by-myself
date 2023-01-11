#include <stdio.h>
int main()
{
   int a,n;
   int i=1;
   int target,sum;
   scanf("%d %d",&a,&n);
   target=a;
   while(i<n)
   {
    target=target*10+a;
    printf("target:%d\n",target);
    sum=target+sum;
    printf("sum:%d\n",sum);
    i++;
   }
   sum=sum+a;
printf("%d\n",sum);
return 0;
}
//求a+aa+aaa+aaaa……的值

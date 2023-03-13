#include <stdio.h>
void swap(int*a,int*b);
int main()
{
    int a,b;
    printf("输入两个数\n");
    scanf("%d %d",&a,&b);
    int* pointer_1;
    int* pointer_2;
    pointer_1=&a;
    pointer_2=&b;
    if(a>b)
    printf("ouput:\nmax=%d min=%d\n",a,b);
    return 0;
    
}
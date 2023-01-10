#include <stdio.h>
void swap(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}

void swap2(int* pa,int* pb)
{
    int temp2=0;
    temp2=*pa;
    *pa=*pb;
    *pb=temp2;
}
int main()
{
    int a=10;
    int b=20;
    printf("a=%d b=%d\n",a,b);
    // swap(a,b);
    swap2(&a,&b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}
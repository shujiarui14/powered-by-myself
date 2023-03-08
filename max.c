#include <stdio.h>
int add(int x,int y,int z)
{
    int temp=x>y?x:y;
    int max=temp>z?temp:z;
    return max;

}
int main()
{
    printf("请输入三个数，并用回车隔开\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int MAX=add(a,b,c);
    printf("在你输入的数中，最大的是%d\n",MAX);
    return 0;

}
#include <stdio.h>
int main()
{
    int x;
    int y;
    int sum;
    for(x=1;x<=9;x++)
    {
        for(y=1;y<=x;y++)
        {
        //    sum=x*y;
           printf("%d*%d=%d ",y,x,y*x);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a=3;
    int b=8;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d b=%d\n",a,b);
}
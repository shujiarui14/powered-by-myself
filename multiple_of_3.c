#include <stdio.h>
int main()
{
    int i=1;
    for(;i<=100;i++)
    {
        if(i%3!=0)
        {
            continue;
        }
        else
        printf("%d  ",i);
    }
    return 0;
}
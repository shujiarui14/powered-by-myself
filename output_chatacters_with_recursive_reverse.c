#include <stdio.h>
void recusive()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        recusive();
        printf("%c",c);
    }
}
int main()
{
    recusive();
    return 0;
}
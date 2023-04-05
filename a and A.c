#include <stdio.h>
int main()
{
    char al[7]={};
    int i=0;
    int conuter1=0,counter2=0;
    printf("请输入七个字符,在输入完成后再按下回车\n");
    for(;i<7;i++)
    {
        al[i]=getchar();
    }
    for(i=0;i<7;i++)
    {
        if(al[i]>64&&al[i]<91)
            conuter1++;
        else if(al[i]>96&&al[i]<139)
        counter2++;
    }
    printf("在你输入的七个字符中大写字母有%d个，小写字母有%d个\n",conuter1,counter2);
    return 0;
}
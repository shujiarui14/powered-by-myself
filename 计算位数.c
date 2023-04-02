#include <stdio.h>

int main()
{
    int num;
    printf("请输入一个不超过8位的整数\n");
    scanf("%d",&num);
    int a=num;
    int tmp=1;
    while(num>10)
    {
        num/=10;
        tmp++;
    }
    if(tmp<9)
    {
        printf("你输入的%d是%d位数\n",a,tmp);
    }
    else
    printf("你输入的数不符合要求\n");
    return 0;
}


// int counter(int x)
// {
//     x%=10;
//     if(x>10)
//     counter(x);
//     return x;
    
// }
// int main()
// {
//     int num;
//     printf("请输入一个不超过8位的整数\n");
//     scanf("%d",&num);
//     int tmp=counter(num);
//     if(tmp<9)
//     {
//         printf("你输入的%d是%d位数\n",num,tmp);
//     }
//     else
//     printf("你输入的数不符合要求\n");
//     return 0;
// }

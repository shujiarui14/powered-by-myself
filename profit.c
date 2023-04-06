#include <stdio.h>
int main()
{
    float total;
    int tmp;
    float b1=10000,b2=b1+100000*0.075,b3=b2+200000*0.05,b4=b3+200000*0.03,b5=b4+400000*0.015;
    printf("请输入利润是多少，（单位：万元）\n");
    scanf("%f",&total);
    if(total<=10&&total>=0)
        tmp=1;
    else if(total>10&&total<=20)
        tmp=2;
    else if(total>20&&total<=40)
        tmp=3;
    else if(total>40&&total<=60)
        tmp=4;
    else if(total>60&&total<=100)
        tmp=5;
    else
        tmp=6;
 
    switch(tmp)
    {
        case 1:
        total=(total*10000)*0.1;
        printf("%g\n",total);
        break;

        case 2:
        total=b1+(total*10000-100000)*0.075;
        printf("%g\n",total);
        break;

        case 3:
        total=b2+(total*10000-200000)*0.05;
        printf("%g\n",total);
        break;

        case 4:
        total=b3+(total*10000-400000)*0.03;
        printf("%g\n",total);
        break;

        case 5:
        total=b4+(total*10000-600000)*0.015;
        printf("%g\n",total);
        break;

        default:
        total=b5+(total*10000-1000000)*0.01;
        printf("%g\n",total);
        break;
    }
    return 0;
    
}
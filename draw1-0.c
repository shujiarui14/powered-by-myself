#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(0));
    int arr[10];
    int i=0,j=0;
    printf("你要抽取几个数？\n");
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n>=1&&n<42)
        break;
        else
        printf("只能在1-42之间\n");
    }
    
    for(;i<n;i++)
    {
        arr[i]=rand();
        while(1)
        {
            arr[i]=arr[i]/10;
            if(arr[i]>=0&&arr[i]<42)
            break;
        }
        printf("%d  ",arr[i]);
    }
    printf("恭喜:\n");
    for(j=0;j<n;j++)
    {
        
     switch (arr[j])
    {
        case 0:
            printf("张如意\n");
        break;

        case 1:
            printf("唐铭阳\n");
        break;

        case 2:
            printf("刘江\n");
        break;
        case 3:
            printf("罗人川\n");
        break;
        case 4:
            printf("涂莎莎\n");
        break;
        case 5:
            printf("邹磊临\n");
        break;
        case 6:
            printf("张小秋\n");
        break;
        case 7:
            printf("王成\n");
        break;
        case 8:
            printf("滕驰\n");
        break;
        case 9:
            printf("王江福\n");
        break;
        case 10:
            printf("周儒香\n");
        break;
        case 11:
            printf("关玉婷\n");
        break;
        case 12:
            printf("江艳花\n");
        break;
        case 13:
            printf("何香港\n");
        break;
        case 14:
            printf("王江\n");
        break;
        case 15:
            printf("胡贵稳\n");
        break;
        case 16:
            printf("向宇峰\n");
        break;
        case 17:
            printf("陈豪\n");
        break;
        case 18:
            printf("田发明\n");
        break;
        case 19:
            printf("杜刘羽\n");
        break;
        case 20:
            printf("胡杰\n");
        break;
        case 21:
            printf("李华军\n");
        break;
        case 22:
            printf("刘文松\n");
        break;
        case 23:
            printf("李绍领\n");
        break;
        case 24:
            printf("李彩艳\n");
        break;
        case 25:
            printf("杨立位\n");
        break;
        case 26:
            printf("唐梨岚\n");
        break;
        case 27:
            printf("杨锐\n");
        break;
        case 28:
            printf("韦乾朽\n");
        break;
        case 29:
            printf("田虎\n");
        break;
        case 30:
            printf("高浪\n");
        break;
        case 31:
            printf("杨秋玲\n");
        break;
        case 32:
            printf("李成春\n");
        break;
        case 33:
            printf("陆雪\n");
        break;
        case 34:
            printf("王逸\n");
        break;
        case 35:
            printf("滚长宽\n");
        break;
        case 36:
            printf("周亚芳\n");
        break;
        case 37:
            printf("杨剑青\n");
        break;
        case 38:
            printf("龙昆\n");
        break;
        case 39:
            printf("舒佳瑞\n");
        break;
    default:
        break;
    }

    }
    return 0;
}
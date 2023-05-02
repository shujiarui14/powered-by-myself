#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int target;
    int arr[100]={};
    int tmp,i=0;
    printf("请输入你需要转换的数(只能是正整数！)\n");
    while(1)
    {
        scanf("%d",&target);
        if(target>=0)
        break;
        else
        printf("是负数！请重新新输入！！\n");
    }
    int target1=target;
    int target2=target1;
    printf("二进制为：");
    while(target)
    {
        arr[i]=target%2;
        target=target/2;
        i++;
    }
    for(i-=1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

   printf("\n");
   printf("八进制为：");
   i=0;
   while(target1)
   {
    if(target1<8)
    {
        arr[i]=target1;
        target1/=8;
    }
    else
    {
    arr[i]=target1%8;
    target1/=8;
    }
    i++;
   }
    for(i-=1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

    printf("\n");
    printf("十六进制为：");
    i=0;
    while(target2)
    {
        
        if(target2<16)
        {
            arr[i]=target2;
            switch(target2)
            {
                case 10:
                arr[i]='A';
                break;

                case 11:
                arr[i]='B';
                break;

                case 12:
                arr[i]='C';
                break;

                case 13:
                arr[i]='D';
                break;

                case 14:
                arr[i]='E';
                break;

                case 15:
                arr[i]='F';
                break;

                default :
                arr[i]=arr[i];
                break;
            }
            target2/=16;

            i++;
        }
    else
    {
        
        arr[i]=target2%16;
        switch(arr[i])
        {
            case 10:
            arr[i]='A';
            break;

            case 11:
            arr[i]='B';
            break; 

            case 12:
            arr[i]='C';
            break;

            case 13:
            arr[i]='D';
            break;

            case 14:
            arr[i]='E';
            break;

            case 15:
            arr[i]='F';
            break;

            default :
            arr[i]=arr[i];
            break;
        }
        target2/=16;
        i++;
    }
   }

   for(i=i-1;i>=0;i--)
    {
        //  printf("i=%d arr=%d",i,arr[i]);
        if(arr[i]>9)
        printf("%c",arr[i]);
        else
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
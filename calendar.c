#include <stdio.h>

int main()
{
    printf("input a data\n");
    int y,m,r;
    int sum;
    int t;
    int i;
    int day;
    scanf("%d %d %d",&y,&m,&r);
    switch(m)
    {
        case 1:
        sum=0;
        break;
        
        case 2:
        sum=31;
        break;
        

        case 3:
        sum=59;
        break;

        case 4:
        sum=90;
        break;

        case 5:
        sum=120;
        break;
        
        case 6:
        sum=151;
        break;

        case 7:
        sum=181;
        break;

        case 8:
        sum=212;
        break;

        case 9:
        sum=243;
        break;

        case 10:
        sum=273;
        break;

        case 11:
        sum=304;
        break;

        case 12:
        sum=334;
        break;

        default :
        printf("wrong data\n");
        break;
    }
     sum=sum+r;
        if(y%4==0||y%400==0)
        {
           sum=sum+1;
        }
        
    for(i=0;i<sum;i++)
    {  
    }
     printf("the day is: %dth day of %d\n",i,y);
   return 0;
}
    

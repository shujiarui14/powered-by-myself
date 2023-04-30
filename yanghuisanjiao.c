#include <stdio.h>
#define row 10
#define col 10
int main()
{
    int arr[row][col];
    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==j||j==0)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            
        }
    }
    printf("这是%d行的杨辉三角\n(如需要打印其他行的杨辉三角请自行改变宏定义的行和列)\n",row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
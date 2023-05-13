/*矩阵魔方*/
#include <stdio.h>
#define N 9
int initboard(int arr[N][N],int x)
{
    int i=0,j=0;
    for(;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            arr[i][j]=0;
        }
    }

}

int main()
{
    int arr[N][N]={0};
    int i=0,j=0;
    int row,col=0;
    int counter=0;
    initboard(arr,N);
    col=N/2;
    arr[row][col]=1;
    printf("这是%d*%d的魔方（若是要计算其他行的模仿请自行更改宏定义N）\n",N,N);
    for(i=2;i;i++)
    {
        if(row==0&&col!=N-1)
        {
            row=N-1;
            col++;
            if(arr[row][col]==0)
            {
                arr[row][col]=i;
            }
            else
            {
                row=0;
                // printf("ss=%d",row);
                row++;
                arr[row][col]=i;
                // printf("#1 row=%d col=%d i=%d\n",row,col,i);
            }
            // printf("#1.1 row=%d col=%d i=%d\n",row,col,i);
        }
        else if(row==0&&col==N-1)
        {
            row++;
            arr[row][col]=i;
        }
        else if(col==N-1)
        {
           col=0;
           row--;
           if(arr[row][col]==0)
           {
            arr[row][col]=i;
           }
        //    printf("#2 row=%d col=%d i=%d\n",row,col,i);
        }
        else
        {
            row--;
            col++;
            if(arr[row][col]==0)
            {
                arr[row][col]=i;
                // printf("#3 row=%d col=%d i=%d\n",row,col,i);
            }
            else
            {
                row+=2;
                col--;
                arr[row][col]=i;
                // printf("#4 row=%d col=%d i=%d\n",row,col,i);
            }
        }
        // printf("N=%d\n",N);
        if(i==N*N)
        {
            break;
        }
    }
    
    printf("\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


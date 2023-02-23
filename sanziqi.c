#include "game.h"


void mune()
{
    printf("***************************\n");
    printf("***按 1 开始 ***按 0 退出***\n");
    printf("***************************\n");

}

char initboard(char board[ROW][COL],int row,int col)
{
    int i=0,j=0;
    for(;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

void displayboard(char board[ROW][COL],int row,int col)
{
    int i=0,j=0,n=0;
    for(;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<row-1)
            printf("|");
             
        }

        printf("\n");
        
        if(i<row-1)
        {
        for(j=0;j<col;j++)
        {
            printf("---");
            if(j<row-1)
            printf("|");
        }
        printf("\n");
        } 
    }
}

char playermove(char board[ROW][COL],int row,int col)
{
   do
   {
     printf("玩家下棋，请输入坐标\n");
    int x=0,y=0;
    scanf("%d %d",&x,&y);
    if(x<row+1&&y<col+1&&board[x-1][y-1]==' ')
    {
    board[x-1][y-1]='#';
    break;
    }
    else
    printf("参数错误，请重新输入\n");
   }while(1);
   printf("\n");
    
}

void computermove(char board[ROW][COL],int row,int col)
{
    int x=0,y=0;
    while(1)
    {
    x=rand()%row;
    y=rand()%col;
    if(board[x][y]==' ')
    {
        board[x][y]='*';
        break;
    }
    }
    printf("\n");
}


int full(char board[ROW][COL],int row,int col,int tmp)
{
    int sum=tmp;
    int r=0, t=0;
    for(;r<row;r++)
    {
        for(;t<col;t++)
        {
            if(board[r][t]!=' ')
            {
                sum+=1;
            }
        }
    }
    return sum;
}

char win(char board[ROW][COL],int row,int col)
{
    int i=0,j=0;
    int tmp;
    for(;i<row;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
        return board[i][0];
    }

    for(;j<col;j++)
    {
        if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[0][j]!=' ')
        return board[0][j];
    }

    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')
    return board[0][0];

    if(board[0][2]==board[2][2]&&board[2][2]==board[2][0]&&board[0][2]!=' ')
    return board[0][2];
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
            return '!';
        }
    }

     tmp=full(board,row,col,tmp)+1;
     if(tmp==9)
     {
        return '@';
     }
}

void game()
{
    char board[ROW][COL]={'a'};
    // printf("%c\n",board[0][0]);
    initboard(board,ROW,COL);
    displayboard(board,ROW,COL);
    int temp='a';  
    do
    {
    printf("参考temp=%c\n",temp);
    
   
    playermove(board,ROW,COL);
    displayboard(board,ROW,COL);
    temp=win(board,ROW,COL);
    // if(temp=='#')
    // {
    //  printf("玩家赢%c\n",temp);
    // break; 
    // }

    // if(temp=='*')
    // printf("电脑赢\n");
    computermove(board,ROW,COL);
    displayboard(board,ROW,COL);
    // win(board,ROW,COL);
    temp=win(board,ROW,COL);

    }
    while(temp=='!');

    switch(temp)
    {
        case '#':
        printf("玩家赢\n");
        break;

        case '*':
        printf("电脑赢\n");
        break;

        case '@':
        printf("平局\n");
        break;

        default:
        printf("target=%c\n",temp);
    }
   
}


void start()
{
    int var=0;
    do
    {
        mune();
        printf("请输入一个数字来确定是否开始游戏\n");
        scanf("%d",&var);
        switch(var)
        {
            case 0:
            printf("退出游戏\n");
            break;

            case 1:
            printf("开始游戏\n");

            game();
            break;

            default :
            printf("错误的质，请重新输入\n");
            break;
        }
    }
    while(var);
}

int main()
{
    start();
    return 0;
}
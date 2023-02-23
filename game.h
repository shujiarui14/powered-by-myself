#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

char initboard(char board[ROW][COL],int row,int col);
void displayboard(char board[ROW][COL],int row,int col);
char playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL],int row,int col);
char win(char board[ROW][COL],int row,int col);
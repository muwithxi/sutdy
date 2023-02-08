#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们游戏情况
//玩家赢 return '*'
//电脑赢 return '#'
//平局 return 'Q'
//继续 return 'C'
char IsWin(char board[ROW][COL], int row, int col);
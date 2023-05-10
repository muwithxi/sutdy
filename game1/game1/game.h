#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);
void DisPlayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int Is_win(char board[ROW][COL], int row, int col);
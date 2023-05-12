#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-----扫雷游戏-----\n");
	//从零开始可以使其对齐
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//第1行到第9行是棋盘的有效部分
		}							   //第0行和第10行是外面一圈
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//埋雷是一个循环，用一个未埋雷数来控制循环
	while (count)
	{
		//随机生成1-9的x，y坐标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//判断是不是可以埋雷的位置，不能重复埋雷
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//成功埋一颗雷，剩余雷数减一
		}
	}
}

int Get_MineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)
	{
		printf("请输入排查坐标:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= 9) && (y >= 1 && y <= 9))
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，排雷失败，你被炸死了\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				int count = Get_MineCount(mine, x, y);//获取附近雷的个数
				show[x][y] = count + '0';
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		Display(mine, row, col);
	}
}
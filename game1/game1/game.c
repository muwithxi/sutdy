#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	//遍历整个二维数组
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisPlayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//控制行
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//数据行，有col列
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//数据行的分割符数是列数少1，也就是col-1
			if (j < col - 1)
			{
				printf("|");
			}
		}
		//打印完数据行换行
		printf("\n");
		//分割行是行数减1，也就是row-1
		if (i < row - 1)
		{
			//分割行里有相应的列数
			for (j = 0; j < col; j++)
			{
				printf("---");
				//最后的一个|不用打印
				if(j < col - 1)
					printf("|");
			}
		}
		//打印分割行完后换行
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	//一对坐标
	int x = 0;
	int y = 0;
	printf("请玩家下棋(输入相应位置的坐标)>:");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标合法
		{
			//判断这个位置是不是一个可以下的空位
			if (board[x - 1][y - 1] == ' ')
			{
				//玩家的棋子假设是*
				board[x - 1][y - 1] = '*';
				break;//当我们成功下了一颗棋后，就不能还是玩家下棋了，退出循环
			}
			else//这个位置有棋子了，重新输入，这里也提醒我们需要使用循环
			{
				printf("这个位置已有棋，不能重复下，请重新输入\n");
			}
		}
		else//坐标不合法来到这里，发现需要重新输入的步骤，我们就加上循环。
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋>:\n");
	while (1)
	{
		//x,y取模row、co;后，坐标一定是合法的，只需要判断这个位置是不是空位就可以了
		//使用rand生成随机数记得在程序执行起来的时候使用srand设置一次随机数生成起点
		int x = rand() % row;
		int y = rand() % col;
		//找到合适的位置下棋
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			//成功下完一颗棋子就退出
			break;
		}
	}
}

int Is_Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	//遍历完，前面所有元素都不是空格，那就是满了，返回1
	return 'F';
}

int Is_win(char board[ROW][COL], int row, int col)
{
	//先假设棋盘满了
	int flag = 'F';
	int i = 0;
	//横三列
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//竖三行
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (flag == Is_Full(board, row, col))//如果判断棋盘的函数返回'F',条件表达式成立，返回flag('F')
	{									 //如果没满，函数返回0，条件表达式成立，程序走到最后返回'C',继续下棋
		return flag;
	}
	//前面所有情况都不成立，那就是游戏没结束继续下棋
	return 'C';
}
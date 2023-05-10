#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("********************\n");
	printf("*****  1.play ******\n");
	printf("*****  0.exit ******\n");
	printf("********************\n");
}

void game()
{
	char board[ROW][COL];//ROW是3行，COL是3列
	int ret = 0;
	//初始化棋盘，将数组元素都初始化成空格字符' ',
	Initboard(board, ROW, COL);
	DisPlayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')//如果ret不是C，那就是游戏有结果了退出下棋
			break;
		ComputerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')//这里就体现出来返回赢方胜利条件的某一位置元素的好处了
		printf("恭喜你，你赢了\n");//比如玩家第一行连成三子棋，Is_win返回其中一个棋子，代表使用这个棋子的一方获胜
	else if (ret == '#')
		printf("很遗憾，你输了\n");
	else
		printf("该局平局\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("这是一个三子棋游戏，请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("不要调皮捣蛋，输入规定的值，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
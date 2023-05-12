#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************\n");
	printf("*** 1. play  ****\n");
	printf("*** 0. exit  ****\n");
	printf("*****************\n");
}

void game()
{
	char mine[ROWS][COLS];//雷盘
	char show[ROWS][COLS];//显示盘
	InitBoard(mine, ROWS, COLS, '0');//将11行11列的雷盘都初始化成字符0
	InitBoard(show, ROWS, COLS, '*');
	Display(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	//使用rand()生成随机数必须要调用一次srand
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("这是一个扫雷游戏,请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//接着就是实现game函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}
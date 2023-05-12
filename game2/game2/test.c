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
	char mine[ROWS][COLS];//����
	char show[ROWS][COLS];//��ʾ��
	InitBoard(mine, ROWS, COLS, '0');//��11��11�е����̶���ʼ�����ַ�0
	InitBoard(show, ROWS, COLS, '*');
	Display(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	//ʹ��rand()�������������Ҫ����һ��srand
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����һ��ɨ����Ϸ,��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//���ž���ʵ��game����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}
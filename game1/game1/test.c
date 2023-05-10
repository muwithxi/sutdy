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
	char board[ROW][COL];//ROW��3�У�COL��3��
	int ret = 0;
	//��ʼ�����̣�������Ԫ�ض���ʼ���ɿո��ַ�' ',
	Initboard(board, ROW, COL);
	DisPlayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')//���ret����C���Ǿ�����Ϸ�н�����˳�����
			break;
		ComputerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')//��������ֳ�������Ӯ��ʤ��������ĳһλ��Ԫ�صĺô���
		printf("��ϲ�㣬��Ӯ��\n");//������ҵ�һ�����������壬Is_win��������һ�����ӣ�����ʹ��������ӵ�һ����ʤ
	else if (ret == '#')
		printf("���ź���������\n");
	else
		printf("�þ�ƽ��\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����һ����������Ϸ��������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Ҫ��Ƥ����������涨��ֵ������������\n");
			break;
		}
	} while (input);
	return 0;
}
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
	printf("-----ɨ����Ϸ-----\n");
	//���㿪ʼ����ʹ�����
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
			printf("%c ", board[i][j]);//��1�е���9�������̵���Ч����
		}							   //��0�к͵�10��������һȦ
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//������һ��ѭ������һ��δ������������ѭ��
	while (count)
	{
		//�������1-9��x��y����
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�ж��ǲ��ǿ������׵�λ�ã������ظ�����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//�ɹ���һ���ף�ʣ��������һ
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
		printf("�������Ų�����:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= 9) && (y >= 1 && y <= 9))
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�������ʧ�ܣ��㱻ը����\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				int count = Get_MineCount(mine, x, y);//��ȡ�����׵ĸ���
				show[x][y] = count + '0';
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Display(mine, row, col);
	}
}
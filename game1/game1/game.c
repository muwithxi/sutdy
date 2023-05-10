#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	//����������ά����
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
	//������
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//�����У���col��
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//�����еķָ������������1��Ҳ����col-1
			if (j < col - 1)
			{
				printf("|");
			}
		}
		//��ӡ�������л���
		printf("\n");
		//�ָ�����������1��Ҳ����row-1
		if (i < row - 1)
		{
			//�ָ���������Ӧ������
			for (j = 0; j < col; j++)
			{
				printf("---");
				//����һ��|���ô�ӡ
				if(j < col - 1)
					printf("|");
			}
		}
		//��ӡ�ָ��������
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	//һ������
	int x = 0;
	int y = 0;
	printf("���������(������Ӧλ�õ�����)>:");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ�
		{
			//�ж����λ���ǲ���һ�������µĿ�λ
			if (board[x - 1][y - 1] == ' ')
			{
				//��ҵ����Ӽ�����*
				board[x - 1][y - 1] = '*';
				break;//�����ǳɹ�����һ����󣬾Ͳ��ܻ�����������ˣ��˳�ѭ��
			}
			else//���λ���������ˣ��������룬����Ҳ����������Ҫʹ��ѭ��
			{
				printf("���λ�������壬�����ظ��£�����������\n");
			}
		}
		else//���겻�Ϸ��������������Ҫ��������Ĳ��裬���Ǿͼ���ѭ����
		{
			printf("��������Ƿ�������������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������>:\n");
	while (1)
	{
		//x,yȡģrow��co;������һ���ǺϷ��ģ�ֻ��Ҫ�ж����λ���ǲ��ǿ�λ�Ϳ�����
		//ʹ��rand����������ǵ��ڳ���ִ��������ʱ��ʹ��srand����һ��������������
		int x = rand() % row;
		int y = rand() % col;
		//�ҵ����ʵ�λ������
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			//�ɹ�����һ�����Ӿ��˳�
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
	//�����꣬ǰ������Ԫ�ض����ǿո��Ǿ������ˣ�����1
	return 'F';
}

int Is_win(char board[ROW][COL], int row, int col)
{
	//�ȼ�����������
	int flag = 'F';
	int i = 0;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//������
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (flag == Is_Full(board, row, col))//����ж����̵ĺ�������'F',�������ʽ����������flag('F')
	{									 //���û������������0���������ʽ�����������ߵ���󷵻�'C',��������
		return flag;
	}
	//ǰ��������������������Ǿ�����Ϸû������������
	return 'C';
}
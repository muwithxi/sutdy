#define _CRT_SECURE_NO_WARNINGS 1


#include "SeqList.h"

void SeqListTest1()
{
	SL s1;
	SeqListInit(&s1);

	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);

	SeqListPushFront(&s1, 0);
	SeqListPushFront(&s1, -1);
	SeqListPrint(&s1);

	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	
	int ret = SeqListFind(&s1, 3);
	printf("��Ҫ�ҵ�Ԫ���±���:%d\n", ret);
}


void SeqListTest2()
{
	SL s1;
	SeqListInit(&s1);

	//�޸ĵ�ͷ��
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	//����λ�ò���
	SeqListInsert(&s1, 2, 6);
	SeqListInsert(&s1, 4, 7);
	SeqListPrint(&s1);
	//��ʱ���Ը����������ĺ�������ͷ���β��
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPrint(&s1);
	//�޸ĵ�ͷɾ
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	//�޸ĵ�βɾ
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
	//�����±꣬����ɾ������
	int pos = SeqListFind(&s1, 6);
	if (pos != -1)
	{
		SeqListErase(&s1, pos);
	}
	SeqListPrint(&s1);
	//����
	SeqListDestory(&s1);
}
int main()
{
	//SeqListTest1();
	SeqListTest2();
	return 0;
}
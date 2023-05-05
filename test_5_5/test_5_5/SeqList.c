#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//��ʼ���ṹ��
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	//����ʽ�ж�
	if (ps->size == ps->capacity)//1.��ʼ������0 2.�����ʱ��size��capacity����
	{
		//����
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		//reallocʧ����
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//�˳�����,ϵͳ���������ִ�е����ó����쳣�˳����˳�����-1
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	//�пռ�����β�壬�����Ŷӣ����ڶ�β
	ps->a[ps->size] = x;//size�����һ�����ݵ���һ��λ�õ��±�
	ps->size++;
}

//��ӡ�ӿ�
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//����
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	//Ų������
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps);









//��ֵ�ı�����βΣ��β���ʵ�ε�һ����ʱ����
//void SeqListInit(SL ps)
//{
//	ps.a = NULL;
//	ps.size = ps.capacity = 0;
//}
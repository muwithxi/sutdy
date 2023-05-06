#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//��ʼ����ʵ��
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//����
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc Fail!\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
}
//void SeqListPushBack(SL* ps, SLDataType x)
//{
//	SeqListCheckCapacity(ps);
//	ps->a[ps->size] = x;
//	ps->size++;
//}

//��ʾ
void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//βɾ
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
}
//void SeqListPopBack(SL* ps)
//{
//	assert(ps->size > 0);
//	ps->size--;
//}

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
}
//void SeqListPushFront(SL* ps, SLDataType x)
//{
//	SeqListCheckCapacity(ps);
//	int end = ps->size - 1;
//	for (int i = end; i >= 0; i--)
//	{
//		ps->a[i + 1] = ps->a[i];
//	}
//	ps->a[0] = x;
//	ps->size++;
//}

//ͷɾ
void SeqListPopFront(SL* ps)
{
	SeqListErase(ps, 0);
}
//void SeqListPopFront(SL* ps)
//{
//	int begin = 0;
//	for (int i = begin; i < ps->size-1; i++)
//	{
//		ps->a[i] = ps->a[i + 1];
//	}
//	ps->size--;
//}

//����
int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//����λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//pos��ָ�±껹��λ�õ�����أ�---posָ�����±�
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	for (int i = end; i >= pos; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->size++;
}

//����λ��ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos < ps->size);
	int begin = pos;
	for (int i = begin; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
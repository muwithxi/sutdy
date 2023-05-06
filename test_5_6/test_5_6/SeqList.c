#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//初始化的实现
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//扩容
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

//尾插
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

//显示
void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//尾删
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
}
//void SeqListPopBack(SL* ps)
//{
//	assert(ps->size > 0);
//	ps->size--;
//}

//头插
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

//头删
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

//查找
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

//任意位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//pos是指下标还是位置的序号呢？---pos指的是下标
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

//任意位置删除
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
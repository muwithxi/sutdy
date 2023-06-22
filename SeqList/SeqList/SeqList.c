#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void AddCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail!\n");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->a = tmp;
	}
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
}

//void SeqListPushBack(SL* ps, SLDataType x)
//{
//	AddCapacity(ps);
//	ps->a[ps->size] = x;
//	ps->size++;
//}

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	SeqListErase(ps, ps->size - 1);
}

//void SeqListPopBack(SL* ps)
//{
//	assert(ps->size > 0);
//	ps->size--;
//}

void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->size = ps->capacity = 0;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
}

//void SeqListPushFront(SL* ps, SLDataType x)
//{
//	AddCapacity(ps);
//	int end = ps->size - 1;
//	while (end >= 0)
//	{
//		ps->a[end + 1] = ps->a[end];
//		--end;
//	}
//	ps->a[0] = x;
//	ps->size++;
//}

void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	SeqListErase(ps, 0);
}

//void SeqListPopFront(SL* ps)
//{
//	assert(ps->size > 0);
//	int begin = 0;
//	while (begin < ps->size - 1)
//	{
//		ps->a[begin] = ps->a[begin + 1];
//		++begin;
//	}
//	ps->size--;
//}

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

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	AddCapacity(ps);
	assert(pos >= 0 && pos <= ps->size);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)
{
	assert(ps->size > 0);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}
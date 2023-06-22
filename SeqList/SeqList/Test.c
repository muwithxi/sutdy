#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void Test1()
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
	SeqListDestroy(&s1);
}

void Test2()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPushFront(&s1, 7);
	SeqListPrint(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	SeqListDestroy(&s1);
}

void Test3()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPushFront(&s1, 4);
	SeqListPrint(&s1);
	int pos = SeqListFind(&s1, 5);
	if (pos != -1)
	{
		s1.a[pos] = 66;
	}
	SeqListPrint(&s1);
}

void Test4()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPrint(&s1);
	int pos = SeqListFind(&s1, 2);
	if (pos != -1)
		SeqListInsert(&s1, pos, 10);
	SeqListPrint(&s1);
	SeqListInsert(&s1, 3, 20);
	SeqListPrint(&s1);
	SeqListErase(&s1, 4);
	SeqListPrint(&s1);
}

void Test5()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	SeqListDestroy(&s1);
}

void Test6()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPrint(&s1);
	SeqListPopFront(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	Test6();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void Test1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPushFront(&plist, 8);
	SListPushFront(&plist, 7);
	SListPushFront(&plist, 6);
	SListPushFront(&plist, 5);
	SListPrint(plist);
}

void Test2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void Test3()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
}

void Test4()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SLTNode* pos = SListFind(plist, 3);
	if (pos != NULL)
	{
		pos->data = 5;
	}
	SListPrint(plist);
}

void Test5()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 10);
	SListPushBack(&plist, 15);
	SListPushFront(&plist, 20);
	SListPushBack(&plist, 25);
	SListPushFront(&plist, 30);
	SListPushBack(&plist, 35);
	SListPushFront(&plist, 40);
	SListPushBack(&plist, 45);
	SListPrint(plist);
	SLTNode* pos = SListFind(plist, 35);
	if (pos != NULL)
	{
		SListInsert(&plist, pos, 88);
	}
	pos = SListFind(plist, 25);
	if (pos != NULL)
	{
		SListErase(&plist, pos);
	}
	SListDestory(&plist);
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	Test5();
	return 0;
}










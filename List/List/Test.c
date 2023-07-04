#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void Test1()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	//ListPopBack(plist);
}

void Test2()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPrint(plist);
	LTNode* pos = ListFind(plist, 2);
	if (pos)
	{
		ListErase(pos);
	}
	ListPrint(plist);
	ListPopFront(plist);
	ListPopBack(plist);
	ListPushFront(plist, 10);
	ListPushBack(plist, 100);
	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;
}

int main()
{
	//Test1();
	Test2();
	return 0;
}
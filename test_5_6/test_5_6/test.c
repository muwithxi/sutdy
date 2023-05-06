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
	printf("需要找的元素下标是:%d\n", ret);
}


void SeqListTest2()
{
	SL s1;
	SeqListInit(&s1);

	//修改的头插
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	//任意位置插入
	SeqListInsert(&s1, 2, 6);
	SeqListInsert(&s1, 4, 7);
	SeqListPrint(&s1);
	//此时可以复用任意插入的函数，给头插和尾插
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPrint(&s1);
	//修改的头删
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	//修改的尾删
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
	//查找下标，进行删除操作
	int pos = SeqListFind(&s1, 6);
	if (pos != -1)
	{
		SeqListErase(&s1, pos);
	}
	SeqListPrint(&s1);
	//销毁
	SeqListDestory(&s1);
}
int main()
{
	//SeqListTest1();
	SeqListTest2();
	return 0;
}
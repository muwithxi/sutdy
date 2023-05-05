#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
void TestSeqList1()
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
	SeqListDestory(&s1);
}

void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 10);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 10);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}

int main()
{
	//TestSeqList1();//这种方法是测试多个接口函数的好办法！
	TestSeqList2();
	return 0;
}












//SeqListInit(s1);//传值调用
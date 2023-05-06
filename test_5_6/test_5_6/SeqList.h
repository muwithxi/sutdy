#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

//初始化
void SeqListInit(SL* ps);
//扩容
void SeqListCheckCapacity(SL* ps);
//尾插
void SeqListPushBack(SL* ps, SLDataType x);
//显示
void SeqListPrint(SL* ps);
//尾删
void SeqListPopBack(SL* ps);
//头插
void SeqListPushFront(SL* ps, SLDataType x);
//头删
void SeqListPopFront(SL* ps);
//查找
int SeqListFind(SL* ps, SLDataType x);
//任意位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);
//任意位置删除
void SeqListErase(SL* ps, int pos);
//销毁
void SeqListDestory(SL* ps);



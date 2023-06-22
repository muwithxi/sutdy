#pragma once
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

void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListPrint(SL* ps);
int SeqListFind(SL* ps, SLDataType x);
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);


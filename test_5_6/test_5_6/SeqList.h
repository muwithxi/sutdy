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

//��ʼ��
void SeqListInit(SL* ps);
//����
void SeqListCheckCapacity(SL* ps);
//β��
void SeqListPushBack(SL* ps, SLDataType x);
//��ʾ
void SeqListPrint(SL* ps);
//βɾ
void SeqListPopBack(SL* ps);
//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);
//ͷɾ
void SeqListPopFront(SL* ps);
//����
int SeqListFind(SL* ps, SLDataType x);
//����λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);
//����λ��ɾ��
void SeqListErase(SL* ps, int pos);
//����
void SeqListDestory(SL* ps);



#pragma once//��---��ֹͷ�ļ�����������

//����������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��̬˳���
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;




void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);

void SeqListPrint(SL* ps);

void SeqListDestory(SL* ps);

void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, SLDataType x);

void SeqListPopFront(SL* ps);














//void SeqListInit(SL ps);//��ֵ�ǲ����Ըı亯���ⲿ������ֵ��

////��̬˳���
//typedef int SLDataType;//��������Ĵ洢Ԫ�����ͣ�����ά��
//#define N 100//�����ʾ�����С�ĺ꣬����ά��
//
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}SL;//�����ṹ�壬������ÿ��ʹ�õ��ṹ���ʱ�򣬶���ܳ�������
//
////�ӿں���---ÿ����Ҫ�õ��ض����ܵ�ʱ�򣬵�����Ӧ�ӿں���������ʵ�־Ϳ�����
//void SeqListInit(SL* ps);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);
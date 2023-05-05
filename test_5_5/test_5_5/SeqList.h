#pragma once//宏---防止头文件被反复包含

//包含常见的头文件
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//动态顺序表
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














//void SeqListInit(SL ps);//传值是不可以改变函数外部变量的值的

////静态顺序表
//typedef int SLDataType;//改名数组的存储元素类型，方便维护
//#define N 100//定义表示数组大小的宏，方便维护
//
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示数组中存储了多少个数据
//}SL;//改名结构体，不用在每次使用到结构体的时候，都打很长的名字
//
////接口函数---每次需要用到特定功能的时候，调用相应接口函数帮我们实现就可以了
//void SeqListInit(SL* ps);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);
#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//初始化结构体
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	//温柔式判断
	if (ps->size == ps->capacity)//1.初始化都是0 2.插入的时候size和capacity满了
	{
		//扩容
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		//realloc失败了
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//退出程序,系统函数，如果执行到就让程序异常退出，退出码是-1
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	//有空间正常尾插，正常排队，排在队尾
	ps->a[ps->size] = x;//size是最后一个数据的下一个位置的下标
	ps->size++;
}

//打印接口
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//销毁
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps);









//传值改变的是形参，形参是实参的一份临时拷贝
//void SeqListInit(SL ps)
//{
//	ps.a = NULL;
//	ps.size = ps.capacity = 0;
//}
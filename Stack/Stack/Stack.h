#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//顺序栈和链式栈，顺序栈比较好，尾插尾删
//链式栈如果栈顶是尾，那么至少要实现成双向链表
//链式栈栈顶是头，那也是可以接受的一种实现方式
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);


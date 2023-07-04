#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->prev = newnode->next = NULL;
	return newnode;
}

LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	if (phead == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	phead->prev = phead;
	phead->next = phead;
	return phead;
}

void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	//1.����ʵ��
	//LTNode* newnode = BuyListNode(x);
	//LTNode* tail = phead->prev;
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;
	//2.Insert����
	ListInsert(phead, x);
}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	//phead��nextָ���Լ���ζ������Ϊ�գ�����Ϊ��ʱ������ɾ����
	assert(phead->next != phead);
	//1.����ʵ��
	/*LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;*/
	//2.ListErase����
	ListErase(phead->prev);

}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	//1.����ʵ��
	//LTNode* newnode = BuyListNode(x);
	//LTNode* next = phead->next;
	//phead->next = newnode;
	//newnode->prev = phead;
	//newnode->next = next;
	//next->prev = newnode;
	//2.Insert����
	ListInsert(phead->next, x);
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//1.����ʵ��
	//LTNode* head = phead->next;
	//LTNode* next = head->next;
	//free(head);
	//phead->next = next;
	//next->prev = phead;
	//2.ListErase����
	ListErase(phead->next);
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(LTNode* pos, LTDataType x)
{
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

//1.��˵�ڱ�λ��ɾ
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;
}

void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
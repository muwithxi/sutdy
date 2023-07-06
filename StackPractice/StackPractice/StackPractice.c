#define _CRT_SECURE_NO_WARNINGS 1


//LeetCode 20有效括号
typedef char STDataType;
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

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = ps->capacity = 0;

}
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

bool isValid(char* s) {
	ST st;
	StackInit(&st);
	while (*s)
	{
		if (*s == '(' || *s == '{' || *s == '[')
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			//当一上来就是需要从出栈与之匹配的收括号
			//那么空栈是无法匹配成功的，并且空栈不能调用Top和Pop这两个接口函数
			if (StackEmpty(&st))
			{
				StackDestroy(&st);
				return false;
			}
			char ch = StackTop(&st);
			StackPop(&st);
			if ((*s == ')' && ch != '(')
				|| (*s == '}' && ch != '{')
				|| (*s == ']' && ch != '['))
			{
				StackDestroy(&st);
				return false;
			}
			s++;
		}
	}
	int ret = StackEmpty(&st);
	StackDestroy(&st);
	return ret;
}
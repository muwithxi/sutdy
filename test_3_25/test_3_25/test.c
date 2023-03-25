#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//void change(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	change(&a, &b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//int is_runyear(int i)
//{
//	if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = is_runyear(i);
//	if (ret == 1)
//	{
//		printf("%d是闰年\n", i);
//	}
//	else
//	{
//		printf("%d不是闰年\n", i);
//	}
//	return 0;
//
//}

//#include <math.h>
//int is_sushu(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_sushu(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//struct Stu
//{
//	int data[1000];
//	int num;
//};
//struct Stu s = { {1,2,3,4}, 5 };
//
//void test1(struct Stu s)//结构体变量大，压栈开销大，容易导致系统功能下降
//{
//	printf("%d\n", s.num);
//}
//
//void test2(struct Stu* ps)//结构体传参就传地址
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	test1(s);//传结构体
//	test2(&s);//传结构体地址
//	return 0;
//}

//struct Stu
//{
//	char name[5];
//	char phone[11];
//	int age;
//};

//void print(struct Stu* ps)
//{
//	printf("%s %s %d\n", (*ps).name, (*ps).phone, (*ps).age);
//	printf("%s %s %d\n", ps->name, ps->phone, ps->age);//结构体指针访问指向对象的成员
//}
//int main()
//{
//	struct Stu s1 = { "王五", "12345678911", 20 };
//	print(&s1);//结构体地址传参
//	return 0;
//}

//结构体类型的声明
//struct tag
//{
//	member - list;
//}variable-list;
//结构是一些值的集合，这些值可以是不同类型的变量，也可以是常量，指针，数组，甚至是结构体，可以嵌套的

//typedef struct Stu
//{
//	char name[5];
//	int age;
//	char phone[11];
//	char sex[5];
//}Stu;//这里的Stu是typedef重新类型定义的结构体类型 Stu = struct Stu 用struct Stu可以创建结构体变量

//typedef struct Stu
//{
//	char name[5];
//	int age;
//}s1;  //在声明结构体类型的时候就可以创建结构体变量了，这个结构体变量是全局变量
//struct Stu s2;//定义结构体变量s2

//struct Stu
//{
//	char name[5];
//	int age;
//}s1 = { "张三",  20 };//可以这样初始化s1这个全局变量
//struct Stu s2 = { "李四", 30 };//初始化s2

//struct Point
//{
//	int x;
//	int y;
//};

//struct Node
//{
//	int data;
//	struct Point p;//结构体嵌套
//	struct Node* next;//结构体指针 struct Node结构体类型
//}n1 = { 5, {2, 1}, NULL };//嵌套结构体初始化
//struct Node n2 = { 8, {1, 2}, NULL };

//结构体变量访问成员，结构的值，成员变量  .操作符   结构体变量.成员名
//struct Stu
//{
//	char name[5];
//	int age;
//}s1 = {"张三", 20};
//int main()
//{
//	s1.age = 30;
//	strcpy(s1.name, "李四");
//	printf("%s %d", s1.name, s1.age);
//	return 0;
//}

//int main()
//{
//	char ch = 'q';//创建字符变量ch 里面初始化值是q
//	short a = 0;//创建短整型变量a 里面初始化值是0
//	int b = 10;
//	float f = 0.0;//创建浮点型变量(说浮点型也没关系)f 里面初始化值是0
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
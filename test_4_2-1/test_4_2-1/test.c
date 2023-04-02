#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Stu//定义struct Stu结构体类型
//{
//	char arr[5];//姓名
//	char arr1[12];//电话号码 12是因为字符串最后还有个斜杠0要一个字符的空间
//	int age;//年龄
//};
//int main()
//{
//	struct Stu s1 = { "张三", "12345678911", 30 };
//	struct Stu* ps = &s1;
//	//结构体变量加.操作符加成员变量访问
//	printf("%s ", s1.arr);
//	printf("%d ", s1.age);
//	printf("%s\n", s1.arr1);
//	//指针加->成员变量访问                ->成员
//	printf("%s ", ps->arr);//指针指向的变量的成员
//	printf("%d ", ps->age);
//	printf("%s\n", ps->arr1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);//%p是打印地址的格式
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&取地址操作符，int *  *的意思是pa是一个指针 ，int的意思是 指针指向的变量是一个整型
//	*pa = 20;//*操作符，叫做解引用操作符，与前面的那个不同，前面的是一个装饰性的存在，告诉我们pa是个指针变量
//	//*pa的意思是 对变量pa里的值（a的地址）进行解引用，找到这个地址指向的变量也就是找到了a 把20赋给a
//	//相当与 a = 20；
//	printf("a = %d\n", a);
//	return 0;
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 5;
//	u_int b = 5;//这两个变量的类型一模一样
//}

//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		static int j = 0;//如果是int j = 0 每次循环进来，j就被赋值成0，增加1后，打印的都是1了
//		j++;            //因为static修饰局部变量，使得j这个变量出for{}代码块不会自动销毁，累积下来
//		printf("%d ", j);//最后才打印出1 2 3 4 5 6 7 8 9 10
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	printf("%d\n", a);//延长生命周期不是扩大作用域
//}
//int main()
//{
//	static int a = 10;
//	printf("%d\n", a);
//	test();
//}

//extern int glo_bal;
//int main()
//{
//	printf("%d\n", glo_bal);
//	return 0;
//}
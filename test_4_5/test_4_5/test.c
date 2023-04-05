#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a, b;
//	printf("请输入两个整数\n");
//	printf("整数A:");
//	scanf("%d", &a);
//	printf("\n");
//	printf("整数B:");
//	scanf("%d", &b);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	char c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%d", &b);
//	printf("%d\n", b);
//	c = getchar();
//	printf("%d\n", c);
//}

//int main()
//{
//	int a, b;
//	char c, d;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%d", &b);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	double c;
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数A:");
//	scanf("%d\n", &a);
//	printf("整数B:");
//	scanf("%d\n", &b);
//	c = (double)a / b;
//	printf("A的值是B的%f", c);
//	return 0;
//}

//int main()
//{
//	int a;
//	char b;
//	char c;
//	scanf("%d", &a);
//	scanf("%c", &b);//是符合类型的，且是回车，直接读取
//	printf("%d\n", a);
//	printf("%d\n", b);
//	c = getchar();
//	printf("%d", c);
//	return 0;
//}

//输入一个回车就读取了 值是10
//int main()
//{
//	char a;
//	a = getchar();
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	char c, d;
//	scanf("%d", &a);//输入5 回车
//	printf("%d\n", a);//打印5
//	scanf("%d", &b);//有回车，但不是要的，把它丢弃，没有内容了，等你输入 输入 6 回车 读取掉6剩一个回车
//	printf("%d\n", b);//打印6
//	c = getchar();//直接读
//	printf("%d\n", c);//打印10
//	d = getchar();//等待
//	printf("%d\n", d);
//	return 0;
//}

//回车会被getchar()读取---2.
//int main()
//{
//	int a, b;
//	scanf("%d", &a);//在输入的时候，我输入5然后回车
//	//回车是为了确认让scanf读取内容到a中
//	printf("a = %d\n", a);//这样读者就更容易理解啦
//	b = getchar();//但是getchar根本没有停下来让我输入一个字符
//	printf("%d", b);//更奇怪的是，b里无缘无故故被赋了个10
//	return 0;
//}

//了解scanf() getchar() putchar()--1.
//int main()
//{
//	int a = 0;
//	char b;
//	char ch = getchar();//getchar读取一个字符放到ch中  输入a 和 回车
//	putchar(ch);//输出一个字符  输出a
//	printf("\n");
//	b = getchar();// 读取 回车
//	printf("%d", b);
//	scanf("%d", &a);//正常输入
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	double c;
//	int a, b;
//	int ch;
//	puts("请输入两个整数");
//	printf("整数a:");
//	scanf("%d", &a);
//	printf("整数b:");
//	getchar();
//	scanf("%d", &b);
//	c = (double)a / b;
//	printf("a是b的%%%lf", c*100);
//	return 0;
//}
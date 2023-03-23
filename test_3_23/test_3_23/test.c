#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	//字符与整型 字符是以ASCII码值存进内存的
//	char a = 'a';
//	int b = 1;
//	int c = '1';
//	char d = '1';
//	char e = 1;
//	return 0;
//}

//只打印数字字符，不打印其它字符
//int main()
//{
//	/*char ch = '\0';
//	while((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}*/
//	int a = 'w';
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	/*default:
//		printf("输入错误\n");
//		break;*/
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	/*default:
//		printf("输入错误\n");
//		break;*/
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("请输入一个整数:>");
//		scanf("%d", &a);
//		if (a % 2 != 0)
//		{
//			printf("%d是奇数\n", a);
//		}
//		else
//		{
//			printf("%d是偶数\n", a);
//		}
//		printf("下次输入0退出\n");
//	} while (a);
//	/*scanf("%d", &a);
//	if (a % 2 != 0)
//	{
//		printf("%d是奇数\n", a);
//	}
//	else
//	{
//		printf("%d是偶数\n", a);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//	//代码块可以包括多条语句，使结构更清晰
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//if (a == 2)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else//悬空else else与最近的未匹配的if结合成选择结构
//	//	printf("haha\n");
//	return 0;
//}

//extern int Add(int, int);//static修饰，函数不具有链接性
//int main()
//{
//	printf("%d\n", Add(2, 3));//error
//	return 0;
//}

//extern int Add(int, int);//无static修饰函数
//int main()
//{
//	printf("%d\n", Add(2, 3));//声明后正常使用
//	return 0;
//}

//add.c static g_val = 20;
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);//error 未声明的标识符
//	return 0;
//}

//int g_val = 10;
//add.c int g_val = 20;
//extern int g_val;
//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
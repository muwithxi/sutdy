#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[3][2] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[4][4] = { {1},{2},{3},{4} };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}

//int main()
//{
//	int arr[][5] = { 1,2,3,4,5,6,7,8 };//列不能省，行根据情况自动
//	int arr1[4][3] = { {1,2},{3,2},{1,3},2 };//使用{}给每个元素初始化
//	int arr2[1][2] = { 1,2 };//也可以直接列出来，一行满了自动换下一行
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };//创建arr数组 根据初始化内容
//	int arr1[5] = { 1,2,3,4,5 };//创建arr1数组 完全初始化
//	float arr2[8] = { 1.1, 2.2, 3.3, 4.4 };//创建arr2数组 未完全初始化
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("\n%d", 43)));
//}

//int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", Add(a, b));
//	return 0;
//}

//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr[10] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒后关机，如果输入我是猪，取消关机\n");
//	scanf("%s", arr);
//	if (0 == strcmp(arr, "我是猪"))
//	{
//		system("shutdown -a");
//		printf("真听话，取消关机了\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		k = 1;
//		for (j = 1; j <= i; j++)
//		{
//			k *= j;
//		}
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

/* goyo语句 */
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

/* do while语句*/
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("玩游戏\n");
//			break;
//		case 2:
//			printf("刷视频\n");
//			break;
//		case 3:
//			printf("和小伙伴玩\n");
//			break;
//		default:
//			printf("睡觉\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

/* for循环 */
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/* while 循环*/
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n);
//		n--;
//	}
//	return 0;
//}

/* switch多分支语句 */
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	default:
//		printf("打工人没有星期六日\n");
//		break;
//	}
//	return 0;
//}

/* if else if多分支语句 */
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 14 && age <= 28)
//	{
//		printf("青少年\n");
//	}
//	else if (age > 28 && age <= 50)
//	{
//		printf("壮年\n");
//	}
//	else if (age > 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("寿星\n");
//	}
//	return 0;
//}

/* if else if双分支语句*/
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 0)
//	{
//		printf("你输入的是正数\n");
//	}
//	else
//	{
//		printf("你输入的是负数\n");
//	}
//	return 0;
//}

/* if单分支语句 */
//int main()
//{
//	int input = 0;
//	printf("如果你输入5，那你会看到我对你说的一句话\n");
//	scanf("%d", &input);
//	if (input == 5)
//	{
//		printf("好听话，谢谢你\n");
//	}
//	return 0;
//}

/* 使用static的函数被限制了外部链接属性 */
//int my_strlen1(char*);//error
/* 没使用static修饰函数声明后正常使用 */
//int my_strlen(char*);
//int main()
//{
//	printf("%d\n", my_strlen("abcdef"));
//	return 0;
//}

/* 函数的外部链接属性 */
//extern int Add(int, int);
/* 不用extern关键字声明也可以使用 */
//int Add(int, int);
//int main()
//{
//	printf("%d\n", Add(2, 5));
//	return 0;
//}

/* 静态全局变量无法外部声明使用 */
//extern int global;
//int global;//不用extern也可以使用外部全局变量global
//int main()
//{
//	printf("%d\n", global);//error
//	return 0;
//}

/*  全局变量的外部声明 */
//extern int global;
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

/*  静态局部变量 */
//void test()
//{
//	static int i = 0;
//	printf("%d ", i);
//	i++;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

/*  计算字符串的长度 */
//#include <string.h>
//int main()
//{
//	printf("%d", strlen("C:\test\320\test.c"));
//	return 0;
//}

/* 打印单引号和双引号 */
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	{
//		printf("%d\n", a);
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//enum Color
//{
//	Red,
//	Bule,
//	Yellow,
//};
//int main()
//{
//	printf("%d", Red);
//	return 0;
//}

//int main()
//{
//	printf("Hello world\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10个整数的最大值
//int main()
//{
	//int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//int i = 0;
	//int max = 0;//error 应赋值数组元素
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int max = arr[0];
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);
//	return 0;
//}

//求1/1-1/2+1/3-...-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//求1/1+1/2+...+1/100的和
//int main()
//{
//	double sum = 0.0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%lf", sum);//5.187378
//	return 0;
//}

//打印1-100数字之间9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位为9
//		{
//			count++;
//		}
//		if (i / 10 == 9)//十位为9
//		{
//			count++;
//		}
//			//i = i / 10;//不要轻易在循环体里改变循环变量
//	}
//	printf("%d", count);
//	return 0;
//}

//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("******* 1.play  0.exit *******\n");
//}
//
//void game()
//{
//	//1.随机生成一个数
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//................................................

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入错误，退出程序\n");
//	}
//	return 0;
//}

//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcom to bit !!!! !!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//'\0'不算长度  下标需-1 所以-1就够了
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//	//char arr1[] = "welcom to bit !!!! !!!!";
//	//char arr2[] = "#######################";
//	//int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//末尾有'\0'元素以及下标需-1 所以-2
//	//while (left <= right)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//	Sleep(1000);
//	//	system("cls");
//	//}
//	//printf("%s\n", arr2);
//	//return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	/*int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <=n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);*/
//	//int n = 0;
//	//int i = 0;
//	//int sum = 1;
//	//scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	sum *= i;//sum * i1 * i2 * i3 * i4...
//	//}
//	//printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认（Y/N）");
//	while((ch = getchar()) != '\n');//清空输入缓冲区
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	//int ret = 0;
//	//char password[20] = { 0 };
//	//printf("请输入密码:>");
//	//scanf("%s", password);
//	//printf("请确认（Y/N）");
//	//getchar();//清空输入缓冲区
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("确认成功\n");
//	//}
//	//else
//	//{
//	//	printf("放弃确认\n");
//	//}
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl+z 结束
//	//{
//	//	putchar(ch);
//	//}
//	return 0;
//}

//int half_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = half_search(arr, k, sz);
//	if (ret)
//		printf("找到了下标是%d", ret);
//	else
//		printf("找不到");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	return 0;
}

//实现n的k次方
//int my_pow(int n, int k)
//{
//	if (k > 0)
//		return my_pow(n, k - 1) * n;
//	else
//		return 1;
//}
////
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d %d", &n, &k);
//	ret = my_pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//递归实现斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//非递归实现斐波那契数列
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n <= 2)
//			printf("%d\n", 1);
//		else
//		{
//			int a = 1;
//			int b = 1;
//			int c = 1;
//			while (n >= 3)
//			{
//				c = a + b;
//				a = b;
//				b = c;
//				n--;
//			}
//			printf("%d\n", c);
//		}
//	}
//	return 0;
//}

//打印格式
//int main()
//{
//	printf("%02d", 1);//%02d 如果是一个数字，还会打印前面的0
//	printf("%#o", 15);//%#o 打印有前导的八进制
//}

//三角形判断
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &b) == 3)
//	{
//		//判断三角形 3 4 5
//		if (a + b > c && b + c > a && c + a > b)
//		{
//			//等边三角形
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			//等腰三角形
//			else if ((a == b) || (b == c) || (c == a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			//普通三角形
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		//不是三角形
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}
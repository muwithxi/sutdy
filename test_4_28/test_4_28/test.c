#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	return 0;
}

//ʵ��n��k�η�
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

//�ݹ�ʵ��쳲���������
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

//�ǵݹ�ʵ��쳲���������
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

//��ӡ��ʽ
//int main()
//{
//	printf("%02d", 1);//%02d �����һ�����֣������ӡǰ���0
//	printf("%#o", 15);//%#o ��ӡ��ǰ���İ˽���
//}

//�������ж�
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &b) == 3)
//	{
//		//�ж������� 3 4 5
//		if (a + b > c && b + c > a && c + a > b)
//		{
//			//�ȱ�������
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			//����������
//			else if ((a == b) || (b == c) || (c == a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			//��ͨ������
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		//����������
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}
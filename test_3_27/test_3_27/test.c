#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdio.h>


//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (1)
//	{
//		if (arr[i] != '\0')
//		{
//			count++;
//			i++;
//		}
//		else
//			return count;
//	}
//}
//int main()
//{
//	char arr[] = "hello, bit";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//void fun(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}
//int fun(int n)
//{
//	if (n)
//		return n * fun(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fun(n);
//	printf("n�Ľ׳���%d\n", ret);
//	return 0;
//}
//enum Color//����ö������
//{
//	Red = 100,//ö�ٳ��� 100
//	Yellow,//ö�ٳ��� 101
//	Blue,//ö�ٳ��� 102
//};
//int main()
//{
//	enum Color a = Yellow;//��ö�����ʹ���ö�ٱ���
//	//Red = 5;//Red�����������޸ģ��ǳ���
//	printf("%d", a);//��ӡ������ֵ��101
//	return 0;
//}

//int main()
//{
//	int a = 0;//����a����
//	const int b = 0;//����b����
//	a = 10;//a���Ա���ֵ��10  =�Ǹ�ֵ������
//	b = 20;//b���ܸı� ��const������
//	return 0;
//}

//void fun(int n)
//{
//	if (n > 9)
//	{
//		fun(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//}
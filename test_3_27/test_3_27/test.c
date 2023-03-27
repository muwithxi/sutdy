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
//	printf("n的阶乘是%d\n", ret);
//	return 0;
//}
//enum Color//创建枚举类型
//{
//	Red = 100,//枚举常量 100
//	Yellow,//枚举常量 101
//	Blue,//枚举常量 102
//};
//int main()
//{
//	enum Color a = Yellow;//用枚举类型创建枚举变量
//	//Red = 5;//Red不能在这里修改，是常量
//	printf("%d", a);//打印出来的值是101
//	return 0;
//}

//int main()
//{
//	int a = 0;//创建a变量
//	const int b = 0;//创建b变量
//	a = 10;//a可以被赋值成10  =是赋值操作符
//	b = 20;//b不能改变 被const修饰了
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
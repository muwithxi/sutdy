#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//递归实现打印一位数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{//1234
//		print(n / 10);//1234        //123        //12       //1
//		printf("%d ", n % 10);//4         //3         //2       //1
//		                      //回溯 1  2  3  4
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//递归实现阶乘
//int Fib(int n)
//{
//	if (n > 0)
//		return Fib(n - 1) * n;
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//非递归实现阶乘
//int Fib(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//计数器实现strlen
//int my_strlen(char* pc)
//{
//	int count = 0;
//	while (*pc != '\0')
//	{
//		count++;
//		pc++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//递归实现strlen
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//}



//将一个字符串一个一个逆序，可以用循环。
//void reverse_string(char* arr)
//{
//	
//	int right = strlen(arr) - 1;
//	int left = 0;
//	char tmp = 0;
//	tmp = arr[right];
//	for (int i = right - 1; i>=0; --i)
//	{
//		arr[i + 1] = arr[i];
//	}
//	arr[left] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//递归实现将多位数的每一位数求和
//int DiGuiSum(int n)
//{
//	if (n > 9)
//		return DiGuiSum(n / 10) + n % 10;
//	else
//		return n % 10;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DiGuiSum(n);
//	printf("%d\n", sum);
//}
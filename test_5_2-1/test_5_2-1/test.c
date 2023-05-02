#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//void test(int x)//x是形参，如果main函数没有调用test x不存在
//{
//	printf("%d", x);
//}
//int main()
//{
//	int a = 1;
//	test(a);//a是实参
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换两个整数a和b\n");
//	Swap(&a, &b);//传a，b的地址
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//计算字符串长度
//int my_strlen(char arr[])
//{
//    int count = 0;
//    while (*arr++ != '\0')
//        count++;
//    return count;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int len = strlen(arr);//计算字符串长度
//    printf("%d\n", len);
//    printf("%d\n", my_strlen(arr));
//    return 0;
//}

//递归逆序字符串
//void reverse_string(char* p)
//{
//	char tmp = *p;
//	int len = strlen(p);
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (*(p+1) != '\0')
//	{
//		reverse_string(p+1);
//	}
//	*(p + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
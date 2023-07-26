#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//模拟实现strstr 查找子字符串
//char* my_strstr(char* dest, char* src)
//{
//	while (*dest)
//	{
//		char* s1 = dest;
//		char* s2 = src;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefgbcdefg";
//	char arr2[] = "efg";
//	printf("%s", my_strstr(arr1, arr2));
//	return 0;
//}

//模拟实现strcat 字符追加
//char* strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	//先找到'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//相当于strcpy 包括拷贝'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s", strcat(arr1, arr2));
//	return 0;
//}

////模拟实现strcmp
//int my_strcmp(const char* dest, const char* src)
//{
//	while (*dest == *src)
//	{
//		if (*src == '\0')
//			return 0;
//		dest++;
//		src++;
//	}
//	//VS的实现，不代表其它编译器，如果dest>src 返回大于0的数
//	if (*dest > *src)
//	{
//		return 1;
//	}
//	//否则返回小于0的数
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abckefs";
//	printf("%d", my_strcmp(arr1, arr2));
//	return 0;
//}
	
////模拟实现strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//src源拷贝到目的地 直到'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello, bit";
//	char arr2[] = "xxxxx";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}



//模拟实现strlen
// 递归实现
//size_t my_strlen(char* str)
//{
//	if (*str)
//	{
//		//使用前置++，保证递归下去是下一个字符开头
//		return my_strlen(++str) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
////指针运算实现
//size_t my_strlen(char* str)
//{
//	char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	//算的是中间的元素个数，所以应该让end指在'\0'时运算
//	return end - str;
//}
//计数器实现
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%u", my_strlen(arr));
//}


//实现通用BubbleSort


//bit 函数指针 使用qsort
//qsort的头文件
//#include <stdlib.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//#include <string.h>
//int cmp_struct_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int cmp_struct_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//void test2()
//{
//	struct Stu arr[3] = { {"wang",20},{"hu",30},{"ming",25}};
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	int i = 0;
//	//根据年龄排序
//	for (i = 0; i < num; i++)
//	{
//		printf("%6s %d  ", arr[i].name, arr[i].age);
//	}
//	printf("\n");
//	qsort(arr, num, size, cmp_struct_age);
//	for (i = 0; i < num; i++)
//	{
//		printf("%6s %d  ", arr[i].name, arr[i].age);
//	}
//	printf("\n");
//	//根据姓名排序
//	printf("\n");
//	qsort(arr, num, size, cmp_struct_name);
//	for (i = 0; i < num; i++)
//	{
//		printf("%6s %d  ", arr[i].name, arr[i].age);
//	}
//	printf("\n");
//
//}
//
////整型比较函数
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void test1()
//{
//	int arr[10] = { 2,8,4,6,7,1,10,5,3,9 };
//	//计算元素个数
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	int i = 0;
//	//排序前的样子
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//使用qsort排序
//	qsort(arr, num, size, cmp_int);
//	//排序后的样子
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//排序整型
//	test1();
//	//排序结构体
//	test2();
//	return 0;
//}
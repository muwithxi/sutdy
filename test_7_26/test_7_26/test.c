#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ģ��ʵ��strstr �������ַ���
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

//ģ��ʵ��strcat �ַ�׷��
//char* strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	//���ҵ�'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//�൱��strcpy ��������'\0'
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

////ģ��ʵ��strcmp
//int my_strcmp(const char* dest, const char* src)
//{
//	while (*dest == *src)
//	{
//		if (*src == '\0')
//			return 0;
//		dest++;
//		src++;
//	}
//	//VS��ʵ�֣����������������������dest>src ���ش���0����
//	if (*dest > *src)
//	{
//		return 1;
//	}
//	//���򷵻�С��0����
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
	
////ģ��ʵ��strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//srcԴ������Ŀ�ĵ� ֱ��'\0'
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



//ģ��ʵ��strlen
// �ݹ�ʵ��
//size_t my_strlen(char* str)
//{
//	if (*str)
//	{
//		//ʹ��ǰ��++����֤�ݹ���ȥ����һ���ַ���ͷ
//		return my_strlen(++str) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
////ָ������ʵ��
//size_t my_strlen(char* str)
//{
//	char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	//������м��Ԫ�ظ���������Ӧ����endָ��'\0'ʱ����
//	return end - str;
//}
//������ʵ��
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


//ʵ��ͨ��BubbleSort


//bit ����ָ�� ʹ��qsort
//qsort��ͷ�ļ�
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
//	//������������
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
//	//������������
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
////���ͱȽϺ���
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void test1()
//{
//	int arr[10] = { 2,8,4,6,7,1,10,5,3,9 };
//	//����Ԫ�ظ���
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	int i = 0;
//	//����ǰ������
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//ʹ��qsort����
//	qsort(arr, num, size, cmp_int);
//	//����������
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//��������
//	test1();
//	//����ṹ��
//	test2();
//	return 0;
//}
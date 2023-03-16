#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <Windows.h>

//NULL-空指针
//NUL、Null-'\0'
//strstr-查找字符串-子字符串
//int main()
//{
//	char* p1 = "haonanabiancheng";
//	char* p2 = "nan";
//	char* p = strstr(p1, p2);
//	if(p == NULL)
//		printf("字符串不存在\n");
//	else
//		printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abczferf";
//	const char* p2 = "abcserewz";
//	//int ret = strncmp(p1, p2, 3);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strncat(char* dest, char* src, int count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest++ != '\0');
//	dest--;
//	while(count--)
//	{
//		if(!(*dest++=*src++))
//			return ret;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "hello\0xxxxxxxxxxx";
//	char str2[] = "bit nihao";
//	char* p1 = my_strncat(str1, str2, 10);//无论追加多少个都会补'\0',追加的字节大于源字符串，不会像strcpy补'\0'
//	printf("%s\n", p1);
//	return 0;
//}

//char* my_strncpy(char* dest, char* src, int count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(count && (*dest++=*src++))
//	{
//		count--;
//	}
//	while(--count)
//		*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abccxxxx";
//	char arr2[] = "bit";
//	int k = 5;
//	char* p1= my_strncpy(arr1, arr2, k);//5是要打印的字节数,strncpy不会自动补'\0',多的位补'\0'
//	printf("%s\n", p1);
//	return 0;
//}

//int my_strcmp(char* str1, char*str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(char* str1, char*str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1-*str2);
//}
//
//int main()
//{
//	char* p1 = "abadef";
//	char* p2 = "abqfeq";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	char* p1 = "assert";
//	char* p2 = "dest";
//	int ret = strcmp(p1, p2);//对应字符比较，看ASCII码值，相等（返回0）比较下一个，第一个字符串大于，返回大于0的数，小于返回小于0的数
//	//相等的情况是两个字符串都遇到'\0'了前面都相等
//	printf("%d\n", ret);
//	return 0;
//}

//char* strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while(*dest)
//		dest++;
//	while(*dest++=*src++)
//		system("1000");
//	return dest;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	strcat(arr1, arr1);
//	return 0;
//}

//用strcat给自己追加会死循环，因为hello\0 在改\0为w的时候 源头就没有\0了
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	//这里没有判断第一个'\0'是否已经是dest的最后一个元素是因为前提条件假设
//	//1.有足够空间 2.有'\0'
//	while(*dest)
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxx";//追加从dest字符串'\0'开始追加，并且src的'\0'也追加
//	char arr2[] = "world";//源字符串有'\0'
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	//error arr1没有足够的空间
//	/*char arr1[] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//拷贝src指向的字符串到dest空间去
//	while(*dest++ = *src++)//一一赋值包括'\0'
//	{
//		;
//	}
//	//while(src != '\0')
//	//{
//	//	*dest++ = *src++;//先解引用赋值后 地址再移一位
//	//}
//	//*dest = *src;//打印'\0'
//	//放回dest空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "abcdefgih";//目标空间要足够大，目标字符串要能改变
//	//error char *p = "abcdefgih";//是常量字符串，不能变
//	char str2[] = "bit";//源字符串要包含'\0'
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	//strcpy(str1, str2);//(*dest, *src) 会把'\0'也拷贝过去
//	return 0;
//}

//size_t == unsigned int
//库函数strlen的返回类型是size_t
//int main()
//{
//	if(strlen("abc")-strlen("abcdef")>0)//3 - 6 = -3 但无符号的-3是大于0的数
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//}

//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* ch)
//{
//	int count = 0;
//	assert(ch != NULL);
//	while(*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

//struct S
//{
//	char arr[20];
//	short age;
//	char name[10];
//};

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret; 
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if(dest<src)
//	{
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//		return (void*)src;
//	}
//	else
//	{
//		while(num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//			++(char*)dest;
//			++(char*)src;
//		}
//		return (void*)src;
//	}
//	return ret;
//}
//
////C语言标准规定:memcpy只要处理不重叠的内存拷贝就可以了--60 在VS编译器底下也可以处理重叠的
////memmove处理重叠的内存拷贝部分 也可以处理不重叠的--100
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);
//	//memcpy(arr+2, arr, 20);
//	my_memmove(arr+2, arr, 20);//是用来处理内存重叠的拷贝情况
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
	////拷贝整型数组
	//int arr1[] = {1,2,3,4,5,6};
	//int arr2[7] = {0};
	//struct S s1[] = {{"124875", 20, "张三"}, {"45156", 25, "李四"}};
	//struct S s2[3] = {0};
	//my_memcpy(arr2, arr1, sizeof(arr1));//void* dest const void* src size_t num 拷贝的字节数
	////拷贝结构体
	//my_memcpy(s2, s1, sizeof(s1));
	//return 0; 
}

//buffers是缓冲区的意思

//内存函数
//int main()
//{
//	//内存函数是用来改变整型数组呀，结构体数组等非字符串的
//	//因为字符串函数改不了这些类型，类型不同，而且字符串函数有'\0'这个特殊的判断条件，结束的标志
//	int arr[] = {1,2,3,4,5};
//	int arr1[5] = {0};
//	int i = 0;
//	strcpy(arr1, arr); //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	for(i=0; i<5; i++)//遇到字节 00 就停止打印了
//	printf("%d ", arr1[i]);
//	//所以有memcpy memmove memcmp memset
//	//void*无类型指针，而不是特定的char*类型的字符串函数
//	return 0;
//}

//字符转换函数
//int main()
//{
//	char arr[] = "I am S J R fROm CHinA";
//	int i = 0;
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
	//int tolower(int c)大写转小写 库函数 而不是大写字母减去32得到相应小写字母
	//int upper(int c)小写转大写 库函数
	/*char ch = 'Q';
	char c = 'q';
	putchar(tolower(ch));
	putchar(toupper(c));*/
//}

//字符分类函数
//int main()
//{
//	char ch = '2';
//	/*char ch = 'A';*/
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	//char ch = 'w';
//	//int ret = islower(ch);//(int)如果符合字符包括的类型，则返回非0值，不符合就返回0
//	//printf("%d\n", ret);
//	return 0;
//}
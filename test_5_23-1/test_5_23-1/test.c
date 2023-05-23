#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	**ppa = 20;
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	char* arr[3] = { "hello,world","C so good","I like it" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int* parr = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* begin = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* end = &arr[9];//第十个元素的地址
//	printf("%d\n", begin - end);
//	printf("%d\n", sz);
//	return 0;
//}

//int* test()
//{
//	int a = 0;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 10;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p + 1);
//}

//int main()
//{
//	int a = -1;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", a);
//
//	a = -1;
//
//	char* pc = &a;
//	*pc = 0;
//	//0xffffff00 - 11111111111111111111111100000000 - 补码
//	//             11111111111111111111111011111111 - 反码
//	//             10000000000000000000000100000000 - 原码
//	//        最高位为1表示负数        第九位是2的8次方
//	printf("%d\n", a);//打印-256
//	return 0;
//}
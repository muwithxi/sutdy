#define _CRT_SECURE_NO_WARNINGS 1

/* 外部链接属性被限制了 */
//static int my_strlen1(const char* str)
//{
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
/* 具有外部链接属性 */
//int my_strlen(const char* str)
//{
//	int count = 0;
//	str先解引用，判断完，再str++
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

/* 静态全局变量可以在本文件内使用 */
//#include <stdio.h>
//static int global = 100;//静态全局变量
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

//int global = 20;//全局变量的外部声明


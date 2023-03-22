#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void test()
//{
//	//static修饰的局部变量-静态局部变量延长了局部变量的生命周期
//	static int j = 0;//j只定义一次 后面再调用test函数时，不编译此句
//	j++;
//	printf("%d ", j);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//typedef  unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 10;//u_int = unsigned int
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//
//	//遍历数组
//	for (i = 0; i < sz; i++)//下标是元素个数减1 i<sz的意思是 最大值到sz-1
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数法--分装成函数，一段相似的代码变成例程，固定下来的流程。
//	int a = 5;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	//暴力解
//	//int a = 10;
//	//int b = 20;
//	//int sum = a + b;
//	//printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//
//	printf("你是小比特了\n");
//	printf("你每天的任务就是敲代码\n");
//	
//	while(line < 20000)
//	{
//		printf("我敲代码\n");
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("小伙子不错，已经敲了两万行代码\n");
//		printf("继续努力大厂offer就是你的\n");
//	}
//	return 0;
//}

//int main()
//{
//	int coding = 0;
//	printf("你选择加入bit吗?(0否1是)\n");
//	printf("请选择:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("恭喜你成为bit的一员，好好坚持，下个大佬就是你\n");
//	else
//		printf("不加入bit将会成为你的遗憾\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	printf("C:\test\418\test.c");//C:	est!8	est.c
//	return 0;
//}

//int main()
//{
//	printf("'\n");
//	printf("%c\n", '\'');
//	printf("\"\n");
//	printf("%s\n", "\"");
//  return 0;
//}

//int a = 10;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int global = 5;
//int global = 10;
//int main()
//{
//	printf("%d\n", global);//error
//  return 0;
//}

//int main()
//{
//	int global = 10;
//	printf("%d\n", global);//10 
//  return 0;
//}

//int main()
//{
//	int global = 10;
//	int global = 20;
//	printf("%d\n", global);//error
//  return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//多个分支的条件编译
//int main()
//{
//#if 1+1
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++) 
//	{
//		arr[i] = 0;
//#if 1//#if后面的常量表达式为真 则执行语句 #if和#endif是一对
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//条件编译 满足条件 编译，不满足编译 预处理的时候处理 叫预处理指令
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG //没定义DEBUG 这句就没有编译了 如果加上#define DEBUG 就这样 不用定义什么 就可以正常打印
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX;//删除宏MAX就变成未定义的了
//	printf("%d\n", MAX);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	//int ret = SIZEOF(int);//宏可以做到函数做不到的事情，传类型
//	//printf("%d\n", ret);
//	int* p = (int*)malloc(10*sizeof(int));
//	//如果定义宏
//	int* pa = MALLOC(10, int);//是不是方便容易理解很多?
//	return 0;
//}

//#define MAX(X, Y) ((X)>(Y)?(X):(Y)) //*替换替换替换 是替换
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//宏的副作用
//	//int max = (a++)>(b++)?(a++):(b++); 
//	//            10 > 11 假  走(b++)  判断部分 a变成了11 b变成12 b++结果先使用后++ max打印就是12 a=11， b=13
//	printf("max = %d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#define MAX 10;
//#define PRINT(X) printf("The value of "#X" is %d\n", X)//前后两个字符串是可以连起来的，#X的意思是，按参数表，把符号看成"符号"，不会宏参数替换
//
//#define CLA(X, Y) X##Y
//int main()
//{
//	int Class110 = 2023;
//	printf("%d\n", Class110);
//	printf("%d\n", CLA(Class, 110));//Class##110等于##宏 -Class110合并标识符
//	return 0;
//}

//int main()
//{
//	// the same 字符串连在一起
//	/*printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo " "wor""ld\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);//#操作符
//	//printf("The value of""a""is %d\n", a)
//	PRINT(b);
//	return 0;
//}

//void Print(int a)
//{
//	printf("The value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Print(a);
//	Print(b);//这里是想说b的值是20而不是b 函数无法实现 用宏
//	return 0;
//}

//int main()
//{
//	int a = MAX;//#define可以重定义有#define定义的内容，#define不能由于递归
//	printf("MAX = %d\n", a);//字符串MAX不会被替换
//	return 0;
//}

//#define MAX 10//自己定义的符号
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)

//#define定义宏
//#define SQUARE(X) X*X//SQUARE(X)就是宏 有名字有参数
//#define DOUBLE(x) x+x
//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(a);//10*5+5 如果还是(x)*(x) 还是10*(x)+(x)  用这样((x)+(x)) 总结:不要吝啬括号
//	//int ret = SQUARE(5);//替换为5*5
//	//printf("%d\n", ret);
//	//int ret = SQUARE(5+1);//宏是替换而不是传参 5+1*5+1 如果想表达6*6 加上括号(X)*(X)
//	//printf("ret = %d\n", ret);
//	return 0;
//}

//#define定义符号
//int main()
//{
//	int a = MAX;//如果在定义MXA的值后加;很容易出问题 这里就当与10;;
//	printf("%d\n", MAX);//就是("%d\n"，10;）;理解不了
//	return 0;
//}

//#开头的都是预处理指令 在预处理阶段处理的 #define #include #pragma()默认对齐数 #if #endif #ifdef #line
//int main()
//{
//	do_forever;//for(;;);
//	//reg int a = 10;//建议为寄存器变量
//	//int max = MAX;//预编译处理完后就是10了
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//如果支持，则值为1，不支持则未定义
//}

//预定义符号:不是自己定义的，语言已经定义的 __FILE__
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	//printf("%s\n", __FILE__);//代码所在源文件的绝对路径（名称）
//	//printf("%d\n", __LINE__);//代码所在的行号
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//写日志文件
//	FILE* pf = fopen("log.txt", "w");
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "//file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//运行:程序必须加载到内存中，如果有操作系统，一般由操作系统完成，否则由手工安排，也可能是通过可执行代码置入只读内存来完成
//程序开始执行 调用main函数
//开始执行代码，内存上开辟空间
//终止程序。正常终止和意外终止
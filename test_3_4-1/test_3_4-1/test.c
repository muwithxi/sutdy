#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int x, y;
//	puts("请输入两个整数。");
//	printf("整数x:");
//	scanf("%d", &x);
//	printf("整数y:");
//	scanf("%d", &y);
//	printf("x的值是y的%.0lf%%", ((double)x/y)*100);
//	return 0;
//}

//int main()
//{
//	int width;
//	int height;
//
//	puts("求长方形的面积。");
//	printf("长:");
//	scanf("%d", &width);
//	printf("宽:");
//	scanf("%d", &height);
//	printf("长方形的面积是:%d\n", width * height);
//	return 0;
//}

//*我们一般用\代替货币符号'元'
//int main()
//{
//	int a, b, c;
//	puts("请输入三个整数。");
//	printf("整数1：");
//	scanf("%d", &a);
//	printf("整数2:");
//	scanf("%d", &b);
//	printf("整数3:");
//	scanf("%d", &c);
//	printf("它们的和是%d\n", a+b+c);
//	/*int a, b;
//	puts("请输入两个整数。");
//	printf("整数1:");
//	scanf("%d", &a);
//	printf("整数2:");
//	scanf("%d", &b);
//	printf("它们的乘积是%d\n", a*b);*/
//	/*puts("天");
//	puts("地");
//	puts("人");*/
//	return 0;
//}

//int main()
//{
//	puts("hello,world");//末尾s是string 字母的意思 puts函数输出作为实参的字符串，并自动换行。
//	printf("hello,world\n");//printf函数可以设定转换格式，也可以输出数值，puts不行。
//	return 0;
//}

//int main()
//{
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("该整数减去6的结果是%d\n", a-6);
//	return 0;
//}

//int main()
//{
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d", &a);//格式化输入函数 限制scanf函数只能读取十进制的整数部分
//	printf("该整数加上12的结果是%d\n", a + 12);
//	return 0;
//}

//*类型要匹配原则*
//int main()
//{
//	//warning 从double转换到int，可能会丢失数据 
//	int a = 3.14;
//	int b = 5.7;
//	printf("%d %d", a, b);//3 5 整型只取整数部分
//	return 0;
//}

//int main()
//{
//	//初始化和赋值的区别
//	int a = 0;
//	a = 10;
//	//初始化是在设计的时候放的值
//	//赋值是重新装修
//	return 0;
//}

//int main()
//{
//	int x, y;//连续声明两个变量 也可以分两行
//	int a;//变量声明 int 是蓝图 设计纸。a是名称 变量名 加上名称后 变量才真实存在
//	return 0;
//}

//int main()
//{
//	//\n换行 光标移至下一行
//	//printf("喂!\n\n您好!\n再见。\n");
//	//printf("天\n地\n人\n");
//	/*printf("天\n");
//	printf("地\n");
//	printf("人\n");*/
//	return 0;
//}

//int main()
//{
//	printf("15减去37的结果是%d\n", 15 - 37);//格式化字符串
//	printf("hello,world\n");//无格式化输出
//	"abcdef";//字符串常量
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}
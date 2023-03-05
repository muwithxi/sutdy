#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	int ret = 0;
//	int a, b;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	//判断相等操作符返回值
//	if (ret = a == b)
//		printf("%d\n", ret);
//	else
//		printf("%d\n", ret);
//	/*printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	if (ret = a > b)
//	{
//		printf("a大于b返回值是%d\n", ret);
//	}
//	else
//	{
//		printf("a小于b返回值是%d\n", ret);
//	}
//	*/
//	return 0;
//}

//int main()
//{
//	//表达式的判断
//	int n;
//	scanf("%d", &n);
//	if (n + 10)//这里面n 10 n+10都是表达是  int n  int 135  int n+135 判断表达式后得到类型和值
//		;
//	printf("hello,world\n");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("a大于b\n");
//	}
//	else if (a < b)
//	{
//		printf("a小于b\n");
//	}
//	else
//	{
//		printf("a等于b\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	printf("请输入一个整数:");
//	scanf("%d", &a);
//	if (a >= 0)
//	{
//		printf("绝对值是%d\n", a);
//	}
//	else
//	{
//		printf("绝对值是%d\n", -a);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	printf("请输入一个整数:");
//	scanf("%d", &a);
//	if (a == 0)
//	{
//		printf("该整数为0\n");
//	}
//	else if (a > 0)
//	{
//		printf("该整数为正数\n");
//	}
//	else//或else if(a<0)
//	{
//		printf("该整数为负数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	puts("请输入两个整数。");
//	printf("整数A:");
//	scanf("%d", &a);
//	printf("整数B:");
//	scanf("%d", &b);
//	if (a % b)//b整不整除a 如果整除表达式结果为0 ，就不执行语句。不整除表达式为非零，执行语句。
//		printf("B不是A的约数。\n");
//	return 0;
//}

//int main()
//{
	//转换说明
	//%09.9f  %是转换符 0是标志，第一个9是最小字段宽度。就是以九位数打印，如果没有九位数，0标志的有无决定补齐时填充0还是空格。f是转换说明符
	//第二个9是精度，表示打印小数点后几位，整数默认是1位，浮点数默认是6位。"-"是左对齐，最小字段设置小了按实际情况打印相应的位数
	/*printf("[%d]\n", 123);*/
	//printf("[%.4d]\n", 123);//*对于整数的转换说明.是没用的%.4d中看做%04d 而且不应该用.这个 因为他就是没有进度一说的*
	//printf("[%.04d]\n", 123);//0123
	//printf("[%0.4d]\n", 123);//0123

	//printf("[%4d]\n", 123);  // 123  *无0标志多的位补空格*
	//printf("[%04d]\n", 123); //0123  *0标志多的位补0*
	//printf("[%-4d]\n", 123); //123  * '-'是左对齐 *
	//printf("[%f]\n", 123.13);//123.130000
	//printf("[%08.2f]\n", 123.13);//00123.13 *小数点和小数位也算在最小字段宽度里*
	//printf("[%8.2f]\n",  123.13);//  123.13
	//printf("[%8.3f]\n",  123.13);// 123.130
	/*int height;
	printf("请输入您的身高:");
	scanf("%d", &height);
	printf("您的标准体重是%.1lf公斤。\n", (height-100)*0.9);*/
//	return 0;
//}

//int main()
//{
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数a:");
//	scanf("%d", &a);
//	printf("整数b:");
//	scanf("%d", &b);
//	printf("a是b的%lf%%\n", (double)a / b * 100);//除法可以是浮点数，强制类型转换后，以f浮点型打印出来，建议用lf，输入(读取时)用lf
//	return 0;
//}

//int main()
//{
//	double x;
//	printf("请输入一个实数:");
//	scanf("%lf", &x);
//	printf("你输入的是%lf\n", x);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}
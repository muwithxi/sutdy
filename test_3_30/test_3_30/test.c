#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	return 0;
}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//计算a与b的和
//	int sum = a + b;
//	//如果我们封装了一个加法函数Add
//	sum = Add(a, b);
//	//以后需要用到加法直接调用Add就可以了，这里看着直接使用加法也挺简单，再往后学你就明白了
//	return 0;
//}

////求两个数中的较大值
//int Max(int x, int y)//x和y是形参 形参只有在调用的时候，才开辟内存空间
//{
//	return x > y ? x : y;//条件表达式 x大于y吗? 大于返回x 小于或等于返回y  x大于y如果是真，则执行exp1 如果是假 执行exp2
//	           // exp1 exp2
//}
//int main()
//{
//	int a, b;//连续创建两个变量
//	scanf("%d%d", &a, &b);//scanf是输入函数，&是取地址操作符 会让你从键盘上输入两个整数
//	int ret = Max(a, b);//调用函数，并接收函数的返回值 a和b是实参
//	printf("较大值是:%d\n", ret);
//}

//int main()
//{
//	int line = 0;//创建一个变量，用来计数
//	while (1)//判断条件恒为真，循环体(代码块的内容)一直重复执行
//	{
//		printf("敲代码，敲代码\n");
//		line++;//循环体每次执行一次，line自增1
//		if (line >= 20000)//直到执行20000次 line符合条件，进入if语句
//		{
//			break;//跳出循环
//		}
//	}
//	//跳出
//	printf("恭喜你通过日复一日的努力，好offer是对你努力的赞扬\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", i);
//	return 0;
//}
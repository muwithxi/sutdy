#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{

	return 0;
}

//struct Stu//在实例化前不占内存
//{
//	char name[20];
//	int age;
//	char id[20];
//};

//int main()
//{
//	/*struct Stu a = {"张三", 20, "20041180"};
//	struct Stu* pa = &a;
//	strcpy((*pa).name, "李四");
//	printf("%s\n", pa->name);*/
//	/*(*pa).age = 10;
//	printf("%d\n", pa->age);*/
//	/*printf("%s\n", pa->name);*/
//	/*printf("%s\n", (*pa).name);*/
//	/*printf("%s\n", a.name);
//	printf("%d\n", a.age);
//	printf("%s\n", a.id);*/
//	//. 操作符 操作数是结构体变量 和 成员名
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//调用的()才叫函数调用操作符 操作数是函数名 和 参数 至少有一个函数名操作数
//	printf("%d\n", max);
//}

//int main()
//{
//	int a[10] = {0};
//	a[4] = 10;
//	//[]的操作数是数组名和下标值分别是a和4
//	return 0;
//}

//逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a=b+10, a, b=a+1);
//	printf("%d\n", c);
//	return 0;
//}

//条件操作符 a>b吗? 1输出a 0输出b
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if(a>b)
//		max = a;
//	else
//		max = b;*/
//	//max = (a>b? a; b);
//	/*if(a>5)
//		b = 3;
//	else
//		b = -3;*/
//
//	//b = (a > 5? 3; -3);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	//出现真的最后就是真的了，不用算后面的了
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	&&左边结果为假了 就不接着算了
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a||b;
//	printf("%d\n", c);
//	//逻辑与 一真一假，结果为真
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&&b;
//	//逻辑与 a为真，b为真,结果为真
//	printf("%d\n", c);
//	return 0;
//}

//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr));//传首元素地址，用指针接收，这里的arr是指针
//}
//
//int main()
//{
//	int arr[10]= {0};
//	test(arr);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//将3.14强制转换为3整型放到int里
//	//()强制类型转换
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);//前置++ 先+再用
//	printf("%d\n", a++);//后置++ 先用再+
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a|(1<<2);
//	printf("%d\n", a);
//	a = a&(~(1<<2));
//	printf("%d\n", a);
//	//00000000000000000000000000001011 第三位改为1 给这个位或上一个1
//	//00000000000000000000000000000100--1<<2
//	//或
//	//00000000000000000000000000001111
//	//按位与
//	//11111111111111111111111111111011   ~(1<<2)
//	  //00000000000000000000000000000100 1<<2
//
//	//00000000000000000000000000001011
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	/*printf("%d\n", a);*/
//	//按位取反
//	//11111111111111111111111111111111
//	printf("%d\n", ~a);//打印原码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//	//打印出来-1
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//截断放入s里 2
//	printf("%d\n", s);//0
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	char r = 'c';
//	char* p = &r;
//	int arr[10]= {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(r));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));//数组的类型是数组除数组名的部分
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;//指针 存放a的地址
//	*pa;//解引用操作符* 指向pa里地址所指的对象a
//	return 0;
//}

//单目操作符-只有一个操作数
//int main()
//{
//	int a = 10;
//	a = !a;//真变假，假变真
//	if(a)//a为真 打印哈哈
//		printf("haha\n");
//	if(!a)//a为假 打印呵呵
//		printf("hehe\n");
//	printf("%d\n", a);
//	return 0;
//}

//复合赋值符
//int main()
//{
//	int a = 0;
//	a += 2;//a = a + 2
//	a >>= 1;//a = a>>1
//	a &= 1;//a = a&1
//	return 0;
//}

//算一个数的二进制位1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	//32个bit都拿到 按位与上1 看结果统计
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//按位与
//	//结果为1，最低位为1，结果为0，最低位为0，统计，向右移动,。
//	for(i=0; i<32; i++)
//	{
//		if((num>>i)&1==1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//算一个数二进制位里有多少个1
//与打印一个十进制数的每一位一样 % /
//存在问题的算法
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while(num)
//	{
//		if(num%2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//异或的方法实现交换两个变量的内容
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	a = a^b;//110
//	b = a^b;//011
//	a = a^b;//101
//	//异或成一个中间量， 原先一个值与中间量异或 得另一个值 3 ^ 6 = 5, 5 ^ 6 = 3
//	return 0;
//}

//加法交换变量内容
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d b = %d\n", a, b);
//	//存在溢出的风险
//	return 0;
//}

//交换变量内容
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//按位与
//	//00000000000000000000000000000001
//	/*int c = a&b;
//	printf("%d\n", c);
//	return 0;*/
//
//	//按位或
//	//00000000000000000000000000000111
//	//int c = a|b;
//	//printf("%d", c);
//
//	//按位异或
//	//00000000000000000000000000000110
//	/*int c = a^b;
//	printf("%d\n", c);*/
//	//同0异1
//}
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	a << 1;//左移操作符，左边丢弃，右边补0 
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//00000000000000000000000000010000
//	//移位
//	int b = a >> 1;//右移操作符 -- 1.算术右移 左边补原符号位 2.逻辑右移 左边补0
//	//00000000000000000000000000001000
//	printf("%d\n", b); //此编译器是算术右移
//	return 0;
//}
//int main()
//{
//	int a = 5/2;//除得商 如果想得小数，除号两端的任意一个操作数需要是小数比如 5.0;
//	printf("%d", a);//此时用double 和 %lf
//	return 0;
//}
//int main()
//{
//	int a = 5%2;//模得余数 取模两边都为整数
//	printf("%d", a);
//	return 0;
//}
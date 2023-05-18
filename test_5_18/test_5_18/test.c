#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int* pa = &a;
	*pa = 1314;
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	int a = 5;
//	int b = a++;
//	int c = ++a;
//	int d = ++a + b++ + c;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	int b = ~a;
//	//从补码的全1变成全0，然后因为最高位变成了0，是正数，原反补相同，打印出来0
//	printf("%d\n", b);
//	//还是一样a它本身不会变的，除非我们对它进行操作后又赋给a
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	float f = 3.1f;
//	double d = 3.14;
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);//取出数组中每个元素的地址
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//
//	a = a + 10;
//	b += 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = a++ || ++b || c++;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = a++ && ++b && c++;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a)
//	{
//		printf("Hello world\n");
//	}
//	if (!a)
//	{
//		printf("Hello asu\n");
//	}
//	if (b)
//	{
//		printf("hehe\n");
//	}
//	if (!b)
//	{
//		printf("welcom u\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄:>");
//	scanf("%d", &age);
//	while (age != -1)
//	{
//		if (age < 18)
//		{
//			printf("未成年\n");
//		}
//		else if (age >= 18 && age <= 30)
//		{
//			printf("青年\n");
//		}
//		else if (age > 30 && age < 50)
//		{
//			printf("壮年\n");
//		}
//		else if (age >= 50 && age <= 80)
//		{
//			printf("老年\n");
//		}
//		printf("请再输入一个年龄，如果输入-1则退出:>");
//		scanf("%d", &age);
//	}
//
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//闰年的判断方法
//		//1.能被400整除
//		//2.能被4整除并且不能被100整除
//		//1和2的方法都能判断，它们是或者的关系，在2方法里面，两个条件是并且关系
//		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
	
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a < 20 || b < 20)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 30;
//	int age1 = 18;
//	if (14 < age && age < 28)
//	{
//		printf("青年\n");
//	}
//	if (14 < age1 && age1 < 28)
//	{
//		printf("青年1\n");
//	}
//}

//int main()
//{
//	int a = 3;//0011
//	int b = 5;//1001
//	int c = a & b;
//	printf("%d\n", c);//0001
//	c = a | b;
//	printf("%d\n", c);//1011
//	c = a ^ b;//同0异1
//	printf("%d\n", c);//1010
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	//10000000000000000000000000000101--原码
//	//11111111111111111111111111111010--反码（原码符号位不变，其它位按位取反）
//	//11111111111111111111111111111011--补码（反码加1）
//	int b = a >> 2;
//	//11111111111111111111111111111110--算术右移 右边两个1出界丢弃，左边补符号位1
//
//	//11111111111111111111111111111110--补码 最高位是1，是负数，逆着求原码
//	//11111111111111111111111111111101--反码 补码减1得反码
//	//10000000000000000000000000000010--原码 反码符号位不变，其它位按位取反
//	//补码，最高位是1，说明是负数，负数怎么求补码，逆着求原码就可以了
//
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int n = 4;
//	int m = n >> 1;
//	printf("n = %d\n", n);
//	printf("m = %d\n", m);
//	return 0;
//}

//int main()
//{
//	float a = 5.0f;
//	float b = 2.0f;
//	printf("%f\n", a / b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 3;
//	printf("%d", a % b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = a + b;//加法
//	int mul = a * b;//乘法
//	int sz = sizeof(a);//求变量占空间的大小
//	if (a == b)
//	{
//		printf("相等\n");
//	}
//	printf("%d %d %d", sum, mul, sz);
//	return 0;
//}
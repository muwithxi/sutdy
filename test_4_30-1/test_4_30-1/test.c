#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//BC32 你能活多少秒
//int main()
//{
//    long age = 0;
//    scanf("%ld", &age);
//    printf("%ld\n", age * 31560000);
//    return 0;
//}

//BC31 2的n次方计算
//int main()
//{
//    int i = 1;
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", i << n);
//    return 0;
//}

//BC30 时间转换
//int main()
//{
//    int seconds = 0;
//    int h, m, s;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds - h * 3600) / 60;
//    s = seconds % 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}

//BC29 开学？
//int main()
//{
//    int X, N;
//    scanf("%d%d", &X, &N);
//    //当X+N的结果是14,14%7是0，实际上是星期日，所以要分出来
//    if ((X + N) % 7 == 0)
//    {
//        printf("%d\n", 7);
//    }
//    else
//    {
//        printf("%d\n", (X + N) % 7);
//    }
//    return 0;
//}

//BC28 整数的十位
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a /= 10;
//    a %= 10;
//    printf("%d\n", a);
//    return 0;
//}

//-------2.BC28 整数的十位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", (a % 100) / 10);
//	return 0;
//}

//BC27 整数的个位
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a %= 10;
//    printf("%d\n", a);
//    return 0;
//}

//BC26 计算带余除法
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}

//BC25 牛牛买电影票
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", n * 100);
//    return 0;
//}

//BC24 浮点数的个位数字
//int main()
//{
//    float f = 0.0f;
//    scanf("%f", &f);
//    //小数不能进行取模运算
//    printf("%d", ((int)f) % 10);
//    return 0;
//}
//BC24 浮点数的个位数字---.2
//int main()
//{
//	int f = 0;
//	scanf("%d", &f);
//	printf("%d\n", f % 10);
//	return 0;
//}

//BC23 牛牛学取余
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a % b);
//    return 0;
//}

//BC22 牛牛学除法
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a / b);
//    return 0;
//}

//BC21 牛牛学加法
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//BC20 进制A+B
//int main()
//{
//    int H = 0;
//    int O = 0;
//    scanf("%x %o", &H, &O);//输入0x12 05 
//    printf("%d\n", H + O);//输出23
//    return 0;
//}

//BC19 牛牛的对齐
//int main()
//{
//    int a, b, c;
//    //同一行为三个数输入数
//    scanf("%d %d %d", &a, &b, &c);
//    //域宽为8并且'-'是表示左对齐
//    printf("%-8d%-8d%-8d\n", a, b, c);
//    printf("%8d%8d%8d\n", a, b, c);
//    return 0;
//}

//BC18 牛牛的空格分隔
//int main()
//{
//    char ch = 0;
//    int a = 0;
//    float f = 0.0f;
//    scanf("%c", &ch);
//    scanf("%d", &a);
//    scanf("%f", &f);
//    printf("%c %d %f", ch, a, f);
//    return 0;
//}
	
//BC17 缩短二进制
//int main()
//{
//	//八进制用%o 十六进制用%x(字母小写) %X(字母大写) 前导加#
//	printf("%#o %#X\n", 1234, 1234);
//	printf("%#o %#x\n", 1234, 1234);
//	return 0;
//}
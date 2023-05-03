#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//int Fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n >= 3)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//    if (3 == n)
//        count++;
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 2) + Fib(n - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    printf("count = %d\n", count);
//}

//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}

////包含头文件
//#include "add.h"
////导入静态库
//#pragma comment(lib, "add.lib")
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}

//int Add(int, int);
//int glo_bal;
//int main()
//{
//	int a = 5;
//	int b = 10;
//	printf("%d\n", glo_bal);
//	printf("%d\n", Add(a, b));
//	return 0;
//}

//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}

//int main()
//{
//    int len = strlen("abcdef");
//    printf("%d\n", len);
//    printf("%d\n", strlen("abcdef"));
//    return 0;
//}

//void put_word(int n)
//{
//    if (11 == n)
//        printf("I miss you!\n");
//    if (13 == n)
//        printf("I want to say\n");
//}
//void put_line()
//{
//    int a = 0;
//    int i = 0;
//    printf("Hello long time no see!\n");
//    for (i = 0; i < 2; i++)
//    {
//        if (i != 1)
//        {
//            printf("你可以输入两次\n");
//        }
//        printf("请输入你要听的字符数(13，11)>:");
//        scanf("%d", &a);
//        put_word(a);
//    }
//
//}
//int main()
//{
//    put_line();
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//int main()
//{
//	for ()
//	{
//		for ()
//		{
//			for ()
//			{
//				.....//这时有种情况需要跳出所有循环，到外头去处理，怎么做
//					 //第一种方法，使用三个break，层层跳出。
//					 //第二种方法，使用goto语句直接跳出
//					goto A;
//			}
//		}
//	}
//	A://跳到的目的地
//	return 0;
//}

//int main()
//{
//    A:
//	printf("hi\n");//死循环打印
//	goto A;//goto A标签处
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = -1;
//	int max = 0;
//	max = j / 2;
//	printf("%d", max)
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_leap_year(int year)
//{
//	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int flag = is_leap_year(year);
//	if (flag == 1)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}

//void change_it(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	change_it(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//get_max(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	get_max(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//网购
//#include <stdio.h>
//
//int main() {
//    float f = 0.0f;
//    int month = 0;
//    int day = 0;
//    int have = 0;
//    float flg = 0.0f;
//    scanf("%f %d %d %d", &f, &month, &day, &have);
//    have %= 2;
//    if (month == 11 && have == 1)
//    {
//        if (f * (1 - 0.3) - 50 < 0)
//        {
//            printf("%.2f", 0.0);
//        }
//        else
//        {
//            printf("%.2f", f * (1 - 0.3) - 50);
//        }
//    }
//    if (month == 11 && have == 0)
//    {
//        printf("%.2f", f * (1 - 0.3));
//    }
//
//    if (month == 12 && have == 1)
//    {
//        if (f * (1 - 0.2) - 50 < 0)
//        {
//            printf("%.2f", flg);
//        }
//        else
//        {
//            printf("%.2f", f * (1 - 0.2) - 50);
//        }
//    }
//    if (month == 12 && have == 0)
//    {
//        printf("%.2f", f * (1 - 0.2));
//    }
//    return 0;
//}

//判断时不是字母
//#include <stdio.h>
//
//int main() {
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}

//小乐乐求最大值
//int main() {
//    int arr[4] = { 0 };
//    int max = 0;
//    int i = 0;
//    scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
//    max = arr[0];
//    for (i = 1; i < 4; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}

//小乐乐求和
//int main() {
//    int n = 0;
//    int i = 0;
//    long sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%ld", sum);
//    return 0;
//}

//void menu()
//{
//	printf("************************\n");
//	printf("***** 0 . exit      ****\n");
//	printf("***** 1 . play      ****\n");
//	printf("************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			printf("要猜的值是%d\n", ret);
//			break;
//		}
//	}
//}
////猜数字游戏
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误,请重新选择\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i += 2)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 != 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int j = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf("%d", &n);
//        for (i = 1; i < n; i++)
//        {
//            ret = 1;
//            for (j = 1; j <= i; j++)
//            {
//                ret *= j;
//            }
//            sum += ret;
//        }
//        printf("%d", sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i < n; i++)
//    {
//        ret *= i;
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//
//int main()
//{
//    char arr1[] = "hello, welcom to C";
//    char arr2[] = "******************";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s", arr2);
//        Sleep(1000);
//        system("cls");
//        left++;
//        right--;
//    }
//    printf("%s\n", arr2);
//    return 0;
//}
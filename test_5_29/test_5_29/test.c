#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    //小数点后位出现问题，换一个浮点数类型
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("%lf", sum);
    return 0;
}

//int main() {
//    int n = 0;
//    int flag = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += flag * i;
//        flag = -flag;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//int main() {
//    int i = 0;
//    //9行
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 0;
//        //9列 列根据行打印
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", j, i, i * j);
//        }
//        //打印完一列换行
//        printf("\n");
//    }
//    return 0;
//}

//int is_su(int x)
//{
//    int i = 0;
//    for (i = 2; i <= sqrt(x); i++)
//    {
//        if (x % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() {
//    int n = 0;
//    int count = 0;
//    for (n = 100; n <= 999; n++)
//    {
//        if (is_su(n))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int odd = 0;
//    for (int i = 1; i <= n; i += 2)
//    {
//        odd++;
//    }
//    printf("%d %d", odd, n - odd);
//    return 0;
//}

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}

//enum flag
//{
//    add = '+',
//    sub = '-',
//    mul = '*',
//    div = '/',
//};
//int main()
//{
//    //精度问题时，需要在float和double之间选择
//    double a = 0.0;
//    double b = 0.0;
//    char ch = 0;
//    //输入的顺序不要不按照它的示例给
//    scanf("%lf%c%lf", &a, &ch, &b);
//    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//    {
//        if (ch == '/' && b == 0)
//        {
//            printf("Wrong!Division by zero!\n");
//        }
//        else
//        {
//            switch (ch)
//            {
//            case add:
//                printf("%.4f%c%.4f=%.4f", a, ch, b, a + b);
//                break;
//            case sub:
//                printf("%.4f%c%.4f=%.4f", a, ch, b, a - b);
//                break;
//            case mul:
//                printf("%.4f%c%.4f=%.4f", a, ch, b, a * b);
//                break;
//            case div:
//                printf("%.4f%c%.4f=%.4f", a, ch, b, a / b);
//                break;
//            }
//        }
//    }
//    else
//    {
//        printf("Invalid operation!\n");
//    }
//}

//int Count(int x)
//{
//    int i = 0;
//    while (x)
//    {
//        x /= 10;
//        i++;
//    }
//    return i;
//}
//
//int Sum(int count, int n)
//{
//    if (count == 3)
//    {
//        int i = 4;
//        int sum = 0;
//        while (i > 1)
//        {
//            sum += n % 10 * i;
//            n /= 10;
//            i--;
//        }
//        return sum;
//    }
//    else
//    {
//        int i = 9;
//        int sum = 0;
//        while (i > 4)
//        {
//            sum += n % 10 * i;
//            n /= 10;
//            i--;
//        }
//        return sum;
//    }
//}
//
//int main() {
//    int start, mid, end;
//    char last;
//    scanf("%d-%d-%d-%c", &start, &mid, &end, &last);
//    int sum = start + Sum(Count(mid), mid) + Sum(Count(end), end);
//    int flag = sum % 11;
//    //细心点，分析每一种情况
//    if (last == 'X' && flag == 10)
//    {
//        printf("Right\n");
//    }
//    else if (flag == last - '0')
//    {
//        printf("Right\n");
//    }
//    else
//    {
//        if (flag == 10)
//        {
//            printf("%d-%d-%d-%c", start, mid, end, 'X');
//        }
//        else
//        {
//            printf("%d-%d-%d-%d", start, mid, end, flag);
//        }
//    }
//    return 0;
//}
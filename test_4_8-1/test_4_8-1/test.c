#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC22 ���ܻ������
//int main()
//{
//    long age = 0;
//    scanf("%ld", &age);
//    printf("%ld", age * 31560000);
//    return 0;
//}

//BC25 ��������ָ��
//int main()
//{
//    int height, weight;
//    float n = 0;
//    scanf("%d %d", &height, &weight);
//    n = (float)weight / 100;
//    n *= n;
//    n = height / n;
//    printf("%.2f", n);
//    return 0;
//}

//BC51 �������ж�
//int Max(int a, int b, int c)
//{
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    return b + c > a;
//}
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (!Max(a, b, c))
//        {
//            printf("Not a triangle!\n");
//        }
//        else
//        {
//            if (a == b || b == c || a == c)
//            {
//                if (a == b && b == c)
//                {
//                    printf("Equilateral triangle!\n");
//                }
//                else
//                {
//                    printf("Isosceles triangle!\n");
//                }
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//    }
//    return 0;
//}

//BC9 printf�ķ���ֵ
//int main() 
//{
//    int n = printf("Hello world!");
//    printf("\n");
//    printf("%d", n);
//    return 0;
//}

//BC114 С�����ŵ���
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", ((n / 12) * 4 + 2));
//    return 0;
//}
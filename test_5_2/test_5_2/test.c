#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//BC37 牛牛的圆
//int main()
//{
//    double r = 0.0;
//    double pi = 3.14;
//    scanf("%lf", &r);
//    printf("%lf\n", pi * r * r);
//    return 0;
//}

//BC36 温度转换
//int main()
//{
//    double f = 0.0;
//    double c = 0.0;
//    scanf("%lf", &f);
//    c = (5 / 9.0) * (f - 32);
//    printf("%.3lf\n", c);
//    return 0;
//}

//BC35 KiKi和酸奶
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    while (scanf("%d%d%d", &n, &h, &m) != EOF)
//    {
//        if (m % h != 0)
//        {
//            printf("%d\n", n - m / h - 1);
//        }
//        else
//        {
//            printf("%d\n", n - m / h);
//        }
//    }
//    return 0;
//}

//BC34 计算三角形的周长和面积
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    float cir = 0.0;
//    float area = 0.0;
//    float p = 0.0;
//    scanf("%d%d%d", &a, &b, &c);
//    cir = a + b + c;
//    p = cir / 2;
//    area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2f area=%.2f", cir, area);
//    return 0;
//}

//BC33 统计成绩
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    float max = 0.0;
//    float min = 100.0;
//    float sum = 0.0;
//    float k = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &k);
//        if (k > max)
//        {
//            max = k;
//        }
//        if (min > k)
//        {
//            min = k;
//        }
//        sum += k;
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / 5);
//    return 0;
//}
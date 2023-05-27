#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <math.h>

//int main() {
//    int y, m, d;
//    int y1, m1, d1;
//    scanf("%d %d %d", &y, &m, &d);
//    scanf("%d %d %d", &y1, &m1, &d1);
//    if (y < y1 || (y == y1 && m < m1) || (y == y1 && m == m1 && d <= d1))
//    {
//        printf("yes");
//    }
//    else
//    {
//        printf("no");
//    }
//    return 0;
//}

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        if (n > 0)
//        {
//            printf("%d\n", 1);
//        }
//        else if (n == 0)
//        {
//            printf("%.1f\n", 1.0 / 2);
//        }
//        else
//        {
//            printf("%d\n", 0);
//        }
//    }
//    return 0;
//}

//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n == 200)
//        {
//            printf("OK\n");
//        }
//        else if (n == 202)
//        {
//            printf("Accepted\n");
//        }
//        else if (n == 400)
//        {
//            printf("Bad Request\n");
//        }
//        else if (n == 403)
//        {
//            printf("Forbidden\n");
//        }
//        else if (n == 404)
//        {
//            printf("Not Found\n");
//        }
//        else if (n == 500)
//        {
//            printf("Internal Server Error\n");
//        }
//        else if (n == 502)
//        {
//            printf("Bad Gateway\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("Monday\n");
//        break;
//    case 2:
//        printf("Tuesday\n");
//        break;
//    case 3:
//        printf("Wednesday\n");
//        break;
//    case 4:
//        printf("Thursday\n");
//        break;
//    case 5:
//        printf("Friday\n");
//        break;
//    case 6:
//        printf("Saturday\n");
//        break;
//    case 7:
//        printf("Sunday\n");
//        break;
//    }
//    return 0;
//}

//int main() {
//    int x, y;
//    int x1, y1;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    int n = x1 - x;
//    int m = y1 - y;
//    if (n == 0 && m == 1)
//    {
//        printf("u");
//    }
//    else if (n == 0 && m == -1)
//    {
//        printf("d");
//    }
//    else if (n == 1 && m == 0)
//    {
//        printf("r");
//    }
//    else
//    {
//        printf("l");
//    }
//    return 0;
//}

//int main() {
//    int dt = 0;
//    scanf("%d", &dt);
//    int stop = 10;
//    if (dt <= 11)
//    {
//        printf("w");
//    }
//    else
//    {
//        printf("v");
//    }
//    return 0;
//}

//int main() {
//    int n = 0;
//    cin >> n;
//    if (n >= 100 && n < 500)
//    {
//        cout << n * 0.9;
//    }
//    else if (n >= 500 && n < 2000)
//    {
//        cout << n * 0.8;
//    }
//    else if (n >= 2000 && n < 5000)
//    {
//        cout << n * 0.7;
//    }
//    else
//    {
//        cout << n * 0.6;
//    }
//    return 0;
//}

//int main() {
//    float weight = 0.0f;
//    char ch = 0;
//    int x = 0;
//    scanf("%f %c", &weight, &ch);
//    //如果为等于y，把x赋值成5，后面加上
//    if (ch == 'y')
//    {
//        x = 5;
//    }
//    //如果是小于1，那么就是直接加上20
//    if (weight < 1)
//    {
//        printf("%d\n", 20 + x);
//    }
//    //等于大于1的情况
//    else
//    {
//        //计算重量里有多少个1
//        int tmp = (int)weight / 1;
//        //如果是整数，减掉一次，这一次是属于起步价的20
//        if (tmp == weight)
//        {
//            printf("%d\n", (20 + (tmp - 1) * 1 + x));
//        }
//        //不为整数，则抵消
//        else
//        {
//            printf("%d\n", (int)(20 + (tmp) * 1 + x));
//        }
//    }
//    return 0;
//}

//int main() {
//    int i = 0;//控制循环
//    int n = 0;//奇数个数计数
//    int p = 0;//偶数个数计数
//    int k = 0;//接收数值
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &k);
//        if (k > 0)
//        {
//            p++;
//        }
//        else
//        {
//            n++;
//        }
//    }
//    printf("positive:%d\n", p);
//    printf("negative:%d\n", n);
//    return 0;
//}

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    //定义一个标签，如果最后还是0，则最后输出n
//    //如果有被整除的情况，将被改成1，最后不符合条件，不输出n
//    int flag = 0;
//    //三次循环，第一次让2试除，依次类推
//    for (i = 0; i < 3; i++)
//    {
//        if (i == 0)
//        {
//            if (a % 2 == 0)
//            {
//                printf("2 ");
//                flag = 1;
//            }
//        }
//        if (i == 1)
//        {
//            if (a % 3 == 0)
//            {
//                printf("3 ");
//                flag = 1;
//            }
//        }
//        if (i == 2)
//        {
//            if (a % 7 == 0)
//            {
//                printf("7 ");
//                flag = 1;
//            }
//        }
//    }
//    //判断有没有被整除过
//    if (flag == 0)
//    {
//        printf("n\n");
//    }
//    return 0;
//}

//int main() {
//    double weight, height;
//    scanf("%lf %lf", &weight, &height);
//    double BMI = weight / pow(height, 2);
//    if (BMI >= 18.5 && BMI <= 23.9)
//    {
//        printf("Normal\n");
//    }
//    else
//    {
//        printf("Abnormal\n");
//    }
//    return 0;
//}

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0;
//    //除法、取模取出最后两位，乘上相应的权重
//    //赋值到变量里表示月份
//    while (i < 2)
//    {
//        sum += n % 10 * pow(10, i);
//        n /= 10;
//        i++;
//    }
//    //根据变量里的月份输出对应的季节
//    switch (sum)
//    {
//    case 12:
//    case 1:
//    case 2:
//        printf("winter\n");
//        break;
//    case 3:
//    case 4:
//    case 5:
//        printf("spring\n");
//        break;
//    case 6:
//    case 7:
//    case 8:
//        printf("summer\n");
//        break;
//    case 9:
//    case 10:
//    case 11:
//        printf("autumn\n");
//        break;
//    }
//    return 0;
//}

//int main() {
//    char ch = 0;
//    scanf("%c", &ch);
//    //isalpha---是字母吗？
//    if (isalpha(ch))
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}

//int main() {
//    int year = 0;
//    scanf("%d", &year);
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}

//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a >= b && a <= c)
//    {
//        printf("true\n");
//    }
//    else
//    {
//        printf("false\n");
//    }
//    return 0;
//}

//int main() {
//    char ch = 0;
//    while (~scanf(" %c", &ch))
//    {
//        //ch如果是元音字母(不分大小写)里的任意一个都输出Vowel
//        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
//            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
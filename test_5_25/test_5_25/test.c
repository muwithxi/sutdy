#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <stdio.h>

//BC60-带空格直角三角形图案
//int main()
//{
//    int n = 0;
//    //多组输入
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //n行
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //n列
//            //1.4 3 2 1 0的打印空格，第一次打印是4行 n - 1，
//            //但不是固定不变的，所以再减去i
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf("  ");
//            }
//            //2.1 2 3 4 5的打印星，第一次打印一个，所以是带有等号的
//            //或者小于，然后+1
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC110：打印X图案
//int main()
//{
//    int n = 0;
//    //多组输入
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //n行
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //n列
//            for (j = 0; j < n; j++)
//            {
//                //行列相同(主) 或者 行和列的和-1(反)
//                if (i == j || i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            //打印一行换一行
//            printf("\n");
//        }
//    }
//    return 0;
//}

//逆置字符串
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    //包括斜杠0，开辟大小为101个字符的数组
//    char arr[101] = { 0 };
//    //1.只读到\n才停止
//    scanf("%[^\n]s", arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    //逆序单词
//    char* cur = arr;
//    char* start = arr;
//    while (*cur)
//    {
//        //找单词
//        while (*cur != ' ' && *cur != '\0')
//        {
//            cur++;
//        }
//        reverse(start, cur - 1);
//        start = cur + 1;
//        if (*cur == ' ')
//            cur++;
//    }
//    printf("%s", arr);
//    return 0;
//}

//乘法遍历求最小公倍数
//16和24 16 * i % 24 == 0;--->16*i 等于 24乘以16*i/24被整除的商
//int main()
//{
//    long long a, b;
//    scanf("%lld%lld", &a, &b);
//    int i = 1;
//    while (1)
//    {
//        if (a * i % b == 0)
//            break;
//        i++;
//    }
//    printf("%lld\n", a * i);
//    return 0;
//}

//遍历法求最小公倍数
 //int main()
 //{
 //    long long a, b;
 //    scanf("%lld%lld", &a, &b);
 //    long long i = a>b?a:b;
 //    //不知道循环多少次，使用while
 //    while(1)
 //    {
 //        //当i能a和b同时整除时，此时的i就是最小公倍数
 //        if(i % a == 0 && i % b == 0)
 //            break;
 //        i++;
 //    }
 //    printf("%lld\n", i);
 //    return 0;
 //}

//公式法求最小公倍数
 //int main()
 //{
 //    long long a, b;
 //    scanf("%lld%lld", &a, &b);
 //    //两数的乘积
 //    long long mul = a * b;
 //    //辗转相除法求最大公约数
 //    while(a % b != 0)
 //    {
 //        long long tmp = a % b;
 //        a = b;
 //        b = tmp;
 //    }
 //    //两数乘积 除以 最大公约数 等于 最小公倍数
 //    printf("%lld\n", mul/b);
 //    return 0;
 //}
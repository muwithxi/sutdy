#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


#include <stdio.h>

#include <stdio.h>

//BC54 获得月份天数

//int main()
//{
//    int y = 0;
//    int m = 0;
//    while (~scanf("%d %d", &y, &m))
//    {
//        if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//            {
//                printf("%d\n", 29);
//            }
//            else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||
//                m == 10 || m == 12)
//            {
//                printf("%d\n", 31);
//            }
//            else
//            {
//                printf("%d\n", 30);
//            }
//        }
//        else
//        {
//            if (m == 2)
//            {
//                printf("%d\n", 28);
//            }
//            else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||
//                m == 10 || m == 12)
//            {
//                printf("%d\n", 31);
//            }
//            else
//            {
//                printf("%d\n", 30);
//            }
//        }
//    }
//    return 0;
//}

//BC96 有序序列的判断
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    i = 0;
//    if (arr[i] > arr[i + 1])
//    {
//        for (i = 1; i < n; i++)
//        {
//            if (arr[i - 1] == arr[i])
//            {
//                ;
//            }
//            else
//            {
//                if (arr[i - 1] < arr[i])
//                {
//                    printf("unsorted\n");
//                    break;
//                }
//            }
//
//        }
//        if (i == n)
//        {
//            printf("sorted\n");
//        }
//    }
//    else
//    {
//        for (i = 1; i < n; i++)
//        {
//            if (arr[i - 1] == arr[i])
//            {
//                ;
//            }
//            else
//            {
//                if (arr[i - 1] > arr[i])
//                {
//                    printf("unsorted\n");
//                    break;
//                }
//            }
//
//        }
//        if (i == n)
//        {
//            printf("sorted\n");
//        }
//    }
//    return 0;
//}

//BC100有序序列的合并
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[2000] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    while (n)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//        n--;
//    }
//    while (m)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//        m--;
//    }
//    int j = 0;
//    for (j = 0; j < i; j++)
//    {
//        int z = 0;
//        for (z = 0; z < i - 1 - j; z++)
//        {
//            if (arr[z] > arr[z + 1])
//            {
//                int tmp = arr[z];
//                arr[z] = arr[z + 1];
//                arr[z + 1] = tmp;
//            }
//        }
//    }
//    for (j = 0; j < i; j++)
//    {
//        printf("%d ", arr[j]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;//3  011   两位不同
//    int m = 0;//5  101
//    scanf("%d %d", &n, &m);
//    int k = n ^ m;
//    int count = 0;
//    for (int i = 31; i >= 0; i--)
//    {
//        if (((k >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = 1;
//    int i = 0;
//    printf("偶数位的序列：>");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d", (n >> i) & k);
//    }
//    printf("\n");
//    printf("奇数位的序列：>");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d", (n >> i) & k);
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int k = 1;
//    int count = 0;
//    scanf("%d", &n);
//    for (int i = 31; i >= 0; i--)
//    {
//        if (((n>>i) & k) == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
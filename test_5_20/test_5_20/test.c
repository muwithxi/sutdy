#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i; j++)
//        {
//            //��ͼ�ᷢ���������ո�
//            printf("  ");
//        }
//        //��һ����1��������ÿ������2
//        //iһ����Ϊ0��û����һ�У��Ͷ��ӡ����*
//        for (j = 0; j < 1 + 2 * i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    for (i = 0; i < n + 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//            printf("  ");
//        }
//        //7�д�ӡ13�� 2*n+2��14����ȥ1����13���պ�
//        //�����°벿�֣���һ��iΪ0������û����һ�У��Ͷ��2���ǺŵĴ�ӡ
//        for (j = 0; j < 2 * n + 2 - 1 - 2 * i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int m, n;
//    int flag = 1;
//    while (scanf("%d%d", &m, &n) != EOF)
//    {
//        int i = 0;
//        int flag = 1;
//        for (i = m; i <= n; i++)
//        {
//            int j = i;
//            int sum = 0;
//            while (j)
//            {
//                sum += pow(j % 10, 3);
//                j /= 10;
//            }
//            if (i == sum)
//            {
//                printf("%d ", i);
//                flag = 0;
//            }
//        }
//        if (flag)
//        {
//            printf("no");
//        }
//    }
//    return 0;
//}


//int main()
//{
//	int n, sn = 0, i, j;
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//		{
//			sn += n;
//		}
//		n *= 10;
//	}
//	printf("%d", sn);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int m = i;
//		int sum = 0;
//		while (m /= 10)
//		{
//			n++;
//		}
//		m = i;
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < 1 + 2 * i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < 2*(n+1)-1-2*i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = n / 2 + 1;
//	int j = n - i;
//	for (int x = 1; x <= i; x++)
//	{
//		int j = 0;
//		for (j = 1; j <= i - x; j++)
//		{
//			printf("  ");
//		}
//		for (j = 1; j <= 2*x - 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (int y = 1; y <= j; y++)
//	{
//		int i = 0;
//		for (i = 1; i <= y; i++)
//		{
//			printf("  ");
//		}
//		for (i = 1; i <= n - 2 * y; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//test()
//{
//	printf("hehe\n");
//	printf("test\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
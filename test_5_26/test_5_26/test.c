#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//    int x1, y1;
//    int x2, y2;
//    //��Ŀ˵����������
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    //��������û�о���ֵ������Ҫ��֤�Ǵ������С����
//    int n = x1 > x2 ? x1 - x2 : x2 - x1;
//    int m = y1 > y2 ? y1 - y2 : y2 - y1; \
//        //ʹ��һ���µı����������ǵĺͣ�����ֱ�ӷ���printf����ʽ����
//        int end = pow(n, 2) + pow(m, 2);
//    printf("%d\n", end);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int arr[32] = { 0 };
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int m = n % 10;
//        if (m % 2 == 0)
//        {
//            arr[i++] = 0;
//        }
//        else
//        {
//            arr[i++] = 1;
//        }
//        n /= 10;
//    }
//    for (i--; i >= 0; i--)
//    {
//        n +=  arr[i] * pow(10, i);
//    }
//    printf("%d\n", n);
//    return 0;
//}
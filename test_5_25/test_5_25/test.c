#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <stdio.h>

//BC60-���ո�ֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    //��������
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //n��
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //n��
//            //1.4 3 2 1 0�Ĵ�ӡ�ո񣬵�һ�δ�ӡ��4�� n - 1��
//            //�����ǹ̶�����ģ������ټ�ȥi
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf("  ");
//            }
//            //2.1 2 3 4 5�Ĵ�ӡ�ǣ���һ�δ�ӡһ���������Ǵ��еȺŵ�
//            //����С�ڣ�Ȼ��+1
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC110����ӡXͼ��
//int main()
//{
//    int n = 0;
//    //��������
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //n��
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //n��
//            for (j = 0; j < n; j++)
//            {
//                //������ͬ(��) ���� �к��еĺ�-1(��)
//                if (i == j || i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            //��ӡһ�л�һ��
//            printf("\n");
//        }
//    }
//    return 0;
//}

//�����ַ���
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
//    //����б��0�����ٴ�СΪ101���ַ�������
//    char arr[101] = { 0 };
//    //1.ֻ����\n��ֹͣ
//    scanf("%[^\n]s", arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    //���򵥴�
//    char* cur = arr;
//    char* start = arr;
//    while (*cur)
//    {
//        //�ҵ���
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

//�˷���������С������
//16��24 16 * i % 24 == 0;--->16*i ���� 24����16*i/24����������
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

//����������С������
 //int main()
 //{
 //    long long a, b;
 //    scanf("%lld%lld", &a, &b);
 //    long long i = a>b?a:b;
 //    //��֪��ѭ�����ٴΣ�ʹ��while
 //    while(1)
 //    {
 //        //��i��a��bͬʱ����ʱ����ʱ��i������С������
 //        if(i % a == 0 && i % b == 0)
 //            break;
 //        i++;
 //    }
 //    printf("%lld\n", i);
 //    return 0;
 //}

//��ʽ������С������
 //int main()
 //{
 //    long long a, b;
 //    scanf("%lld%lld", &a, &b);
 //    //�����ĳ˻�
 //    long long mul = a * b;
 //    //շת����������Լ��
 //    while(a % b != 0)
 //    {
 //        long long tmp = a % b;
 //        a = b;
 //        b = tmp;
 //    }
 //    //�����˻� ���� ���Լ�� ���� ��С������
 //    printf("%lld\n", mul/b);
 //    return 0;
 //}
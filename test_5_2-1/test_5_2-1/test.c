#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//void test(int x)//x���βΣ����main����û�е���test x������
//{
//	printf("%d", x);
//}
//int main()
//{
//	int a = 1;
//	test(a);//a��ʵ��
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("������������a��b\n");
//	Swap(&a, &b);//��a��b�ĵ�ַ
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//�����ַ�������
//int my_strlen(char arr[])
//{
//    int count = 0;
//    while (*arr++ != '\0')
//        count++;
//    return count;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int len = strlen(arr);//�����ַ�������
//    printf("%d\n", len);
//    printf("%d\n", my_strlen(arr));
//    return 0;
//}

//�ݹ������ַ���
//void reverse_string(char* p)
//{
//	char tmp = *p;
//	int len = strlen(p);
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (*(p+1) != '\0')
//	{
//		reverse_string(p+1);
//	}
//	*(p + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
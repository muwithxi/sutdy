#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[3][2] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[4][4] = { {1},{2},{3},{4} };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}

//int main()
//{
//	int arr[][5] = { 1,2,3,4,5,6,7,8 };//�в���ʡ���и�������Զ�
//	int arr1[4][3] = { {1,2},{3,2},{1,3},2 };//ʹ��{}��ÿ��Ԫ�س�ʼ��
//	int arr2[1][2] = { 1,2 };//Ҳ����ֱ���г�����һ�������Զ�����һ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };//����arr���� ���ݳ�ʼ������
//	int arr1[5] = { 1,2,3,4,5 };//����arr1���� ��ȫ��ʼ��
//	float arr2[8] = { 1.1, 2.2, 3.3, 4.4 };//����arr2���� δ��ȫ��ʼ��
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("\n%d", 43)));
//}

//int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", Add(a, b));
//	return 0;
//}

//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr[10] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���60���ػ����������������ȡ���ػ�\n");
//	scanf("%s", arr);
//	if (0 == strcmp(arr, "������"))
//	{
//		system("shutdown -a");
//		printf("��������ȡ���ػ���\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		k = 1;
//		for (j = 1; j <= i; j++)
//		{
//			k *= j;
//		}
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

/* goyo��� */
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

/* do while���*/
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����Ϸ\n");
//			break;
//		case 2:
//			printf("ˢ��Ƶ\n");
//			break;
//		case 3:
//			printf("��С�����\n");
//			break;
//		default:
//			printf("˯��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

/* forѭ�� */
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/* while ѭ��*/
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n);
//		n--;
//	}
//	return 0;
//}

/* switch���֧��� */
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	default:
//		printf("����û����������\n");
//		break;
//	}
//	return 0;
//}

/* if else if���֧��� */
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 14 && age <= 28)
//	{
//		printf("������\n");
//	}
//	else if (age > 28 && age <= 50)
//	{
//		printf("׳��\n");
//	}
//	else if (age > 50 && age < 80)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

/* if else if˫��֧���*/
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 0)
//	{
//		printf("�������������\n");
//	}
//	else
//	{
//		printf("��������Ǹ���\n");
//	}
//	return 0;
//}

/* if����֧��� */
//int main()
//{
//	int input = 0;
//	printf("���������5������ῴ���Ҷ���˵��һ�仰\n");
//	scanf("%d", &input);
//	if (input == 5)
//	{
//		printf("��������лл��\n");
//	}
//	return 0;
//}

/* ʹ��static�ĺ������������ⲿ�������� */
//int my_strlen1(char*);//error
/* ûʹ��static���κ�������������ʹ�� */
//int my_strlen(char*);
//int main()
//{
//	printf("%d\n", my_strlen("abcdef"));
//	return 0;
//}

/* �������ⲿ�������� */
//extern int Add(int, int);
/* ����extern�ؼ�������Ҳ����ʹ�� */
//int Add(int, int);
//int main()
//{
//	printf("%d\n", Add(2, 5));
//	return 0;
//}

/* ��̬ȫ�ֱ����޷��ⲿ����ʹ�� */
//extern int global;
//int global;//����externҲ����ʹ���ⲿȫ�ֱ���global
//int main()
//{
//	printf("%d\n", global);//error
//	return 0;
//}

/*  ȫ�ֱ������ⲿ���� */
//extern int global;
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}

/*  ��̬�ֲ����� */
//void test()
//{
//	static int i = 0;
//	printf("%d ", i);
//	i++;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

/*  �����ַ����ĳ��� */
//#include <string.h>
//int main()
//{
//	printf("%d", strlen("C:\test\320\test.c"));
//	return 0;
//}

/* ��ӡ�����ź�˫���� */
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	{
//		printf("%d\n", a);
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//enum Color
//{
//	Red,
//	Bule,
//	Yellow,
//};
//int main()
//{
//	printf("%d", Red);
//	return 0;
//}

//int main()
//{
//	printf("Hello world\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	//�ַ������� �ַ�����ASCII��ֵ����ڴ��
//	char a = 'a';
//	int b = 1;
//	int c = '1';
//	char d = '1';
//	char e = 1;
//	return 0;
//}

//ֻ��ӡ�����ַ�������ӡ�����ַ�
//int main()
//{
//	/*char ch = '\0';
//	while((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}*/
//	int a = 'w';
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	/*default:
//		printf("�������\n");
//		break;*/
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	/*default:
//		printf("�������\n");
//		break;*/
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("������һ������:>");
//		scanf("%d", &a);
//		if (a % 2 != 0)
//		{
//			printf("%d������\n", a);
//		}
//		else
//		{
//			printf("%d��ż��\n", a);
//		}
//		printf("�´�����0�˳�\n");
//	} while (a);
//	/*scanf("%d", &a);
//	if (a % 2 != 0)
//	{
//		printf("%d������\n", a);
//	}
//	else
//	{
//		printf("%d��ż��\n", a);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//	//�������԰���������䣬ʹ�ṹ������
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//if (a == 2)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else//����else else�������δƥ���if��ϳ�ѡ��ṹ
//	//	printf("haha\n");
//	return 0;
//}

//extern int Add(int, int);//static���Σ�����������������
//int main()
//{
//	printf("%d\n", Add(2, 3));//error
//	return 0;
//}

//extern int Add(int, int);//��static���κ���
//int main()
//{
//	printf("%d\n", Add(2, 3));//����������ʹ��
//	return 0;
//}

//add.c static g_val = 20;
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);//error δ�����ı�ʶ��
//	return 0;
//}

//int g_val = 10;
//add.c int g_val = 20;
//extern int g_val;
//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
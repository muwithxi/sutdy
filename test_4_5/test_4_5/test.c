#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a, b;
//	printf("��������������\n");
//	printf("����A:");
//	scanf("%d", &a);
//	printf("\n");
//	printf("����B:");
//	scanf("%d", &b);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	char c;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%d", &b);
//	printf("%d\n", b);
//	c = getchar();
//	printf("%d\n", c);
//}

//int main()
//{
//	int a, b;
//	char c, d;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%d", &b);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	double c;
//	int a, b;
//	puts("��������������");
//	printf("����A:");
//	scanf("%d\n", &a);
//	printf("����B:");
//	scanf("%d\n", &b);
//	c = (double)a / b;
//	printf("A��ֵ��B��%f", c);
//	return 0;
//}

//int main()
//{
//	int a;
//	char b;
//	char c;
//	scanf("%d", &a);
//	scanf("%c", &b);//�Ƿ������͵ģ����ǻس���ֱ�Ӷ�ȡ
//	printf("%d\n", a);
//	printf("%d\n", b);
//	c = getchar();
//	printf("%d", c);
//	return 0;
//}

//����һ���س��Ͷ�ȡ�� ֵ��10
//int main()
//{
//	char a;
//	a = getchar();
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	char c, d;
//	scanf("%d", &a);//����5 �س�
//	printf("%d\n", a);//��ӡ5
//	scanf("%d", &b);//�лس���������Ҫ�ģ�����������û�������ˣ��������� ���� 6 �س� ��ȡ��6ʣһ���س�
//	printf("%d\n", b);//��ӡ6
//	c = getchar();//ֱ�Ӷ�
//	printf("%d\n", c);//��ӡ10
//	d = getchar();//�ȴ�
//	printf("%d\n", d);
//	return 0;
//}

//�س��ᱻgetchar()��ȡ---2.
//int main()
//{
//	int a, b;
//	scanf("%d", &a);//�������ʱ��������5Ȼ��س�
//	//�س���Ϊ��ȷ����scanf��ȡ���ݵ�a��
//	printf("a = %d\n", a);//�������߾͸����������
//	b = getchar();//����getchar����û��ͣ������������һ���ַ�
//	printf("%d", b);//����ֵ��ǣ�b����Ե�޹ʹʱ����˸�10
//	return 0;
//}

//�˽�scanf() getchar() putchar()--1.
//int main()
//{
//	int a = 0;
//	char b;
//	char ch = getchar();//getchar��ȡһ���ַ��ŵ�ch��  ����a �� �س�
//	putchar(ch);//���һ���ַ�  ���a
//	printf("\n");
//	b = getchar();// ��ȡ �س�
//	printf("%d", b);
//	scanf("%d", &a);//��������
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	double c;
//	int a, b;
//	int ch;
//	puts("��������������");
//	printf("����a:");
//	scanf("%d", &a);
//	printf("����b:");
//	getchar();
//	scanf("%d", &b);
//	c = (double)a / b;
//	printf("a��b��%%%lf", c*100);
//	return 0;
//}
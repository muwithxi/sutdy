#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void test()
//{
//	//static���εľֲ�����-��̬�ֲ������ӳ��˾ֲ���������������
//	static int j = 0;//jֻ����һ�� �����ٵ���test����ʱ��������˾�
//	j++;
//	printf("%d ", j);
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

//typedef  unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 10;//u_int = unsigned int
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//
//	//��������
//	for (i = 0; i < sz; i++)//�±���Ԫ�ظ�����1 i<sz����˼�� ���ֵ��sz-1
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//������--��װ�ɺ�����һ�����ƵĴ��������̣��̶����������̡�
//	int a = 5;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	//������
//	//int a = 10;
//	//int b = 20;
//	//int sum = a + b;
//	//printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//
//	printf("����С������\n");
//	printf("��ÿ�����������ô���\n");
//	
//	while(line < 20000)
//	{
//		printf("���ô���\n");
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("С���Ӳ����Ѿ����������д���\n");
//		printf("����Ŭ����offer�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int coding = 0;
//	printf("��ѡ�����bit��?(0��1��)\n");
//	printf("��ѡ��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("��ϲ���Ϊbit��һԱ���úü�֣��¸����о�����\n");
//	else
//		printf("������bit�����Ϊ����ź�\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	printf("C:\test\418\test.c");//C:	est!8	est.c
//	return 0;
//}

//int main()
//{
//	printf("'\n");
//	printf("%c\n", '\'');
//	printf("\"\n");
//	printf("%s\n", "\"");
//  return 0;
//}

//int a = 10;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int global = 5;
//int global = 10;
//int main()
//{
//	printf("%d\n", global);//error
//  return 0;
//}

//int main()
//{
//	int global = 10;
//	printf("%d\n", global);//10 
//  return 0;
//}

//int main()
//{
//	int global = 10;
//	int global = 20;
//	printf("%d\n", global);//error
//  return 0;
//}
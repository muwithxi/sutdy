#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//void change(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	change(&a, &b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//int is_runyear(int i)
//{
//	if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = is_runyear(i);
//	if (ret == 1)
//	{
//		printf("%d������\n", i);
//	}
//	else
//	{
//		printf("%d��������\n", i);
//	}
//	return 0;
//
//}

//#include <math.h>
//int is_sushu(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_sushu(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//struct Stu
//{
//	int data[1000];
//	int num;
//};
//struct Stu s = { {1,2,3,4}, 5 };
//
//void test1(struct Stu s)//�ṹ�������ѹջ���������׵���ϵͳ�����½�
//{
//	printf("%d\n", s.num);
//}
//
//void test2(struct Stu* ps)//�ṹ�崫�ξʹ���ַ
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	test1(s);//���ṹ��
//	test2(&s);//���ṹ���ַ
//	return 0;
//}

//struct Stu
//{
//	char name[5];
//	char phone[11];
//	int age;
//};

//void print(struct Stu* ps)
//{
//	printf("%s %s %d\n", (*ps).name, (*ps).phone, (*ps).age);
//	printf("%s %s %d\n", ps->name, ps->phone, ps->age);//�ṹ��ָ�����ָ�����ĳ�Ա
//}
//int main()
//{
//	struct Stu s1 = { "����", "12345678911", 20 };
//	print(&s1);//�ṹ���ַ����
//	return 0;
//}

//�ṹ�����͵�����
//struct tag
//{
//	member - list;
//}variable-list;
//�ṹ��һЩֵ�ļ��ϣ���Щֵ�����ǲ�ͬ���͵ı�����Ҳ�����ǳ�����ָ�룬���飬�����ǽṹ�壬����Ƕ�׵�

//typedef struct Stu
//{
//	char name[5];
//	int age;
//	char phone[11];
//	char sex[5];
//}Stu;//�����Stu��typedef�������Ͷ���Ľṹ������ Stu = struct Stu ��struct Stu���Դ����ṹ�����

//typedef struct Stu
//{
//	char name[5];
//	int age;
//}s1;  //�������ṹ�����͵�ʱ��Ϳ��Դ����ṹ������ˣ�����ṹ�������ȫ�ֱ���
//struct Stu s2;//����ṹ�����s2

//struct Stu
//{
//	char name[5];
//	int age;
//}s1 = { "����",  20 };//����������ʼ��s1���ȫ�ֱ���
//struct Stu s2 = { "����", 30 };//��ʼ��s2

//struct Point
//{
//	int x;
//	int y;
//};

//struct Node
//{
//	int data;
//	struct Point p;//�ṹ��Ƕ��
//	struct Node* next;//�ṹ��ָ�� struct Node�ṹ������
//}n1 = { 5, {2, 1}, NULL };//Ƕ�׽ṹ���ʼ��
//struct Node n2 = { 8, {1, 2}, NULL };

//�ṹ��������ʳ�Ա���ṹ��ֵ����Ա����  .������   �ṹ�����.��Ա��
//struct Stu
//{
//	char name[5];
//	int age;
//}s1 = {"����", 20};
//int main()
//{
//	s1.age = 30;
//	strcpy(s1.name, "����");
//	printf("%s %d", s1.name, s1.age);
//	return 0;
//}

//int main()
//{
//	char ch = 'q';//�����ַ�����ch �����ʼ��ֵ��q
//	short a = 0;//���������ͱ���a �����ʼ��ֵ��0
//	int b = 10;
//	float f = 0.0;//���������ͱ���(˵������Ҳû��ϵ)f �����ʼ��ֵ��0
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int* pa = &a;
	*pa = 1314;
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	int a = 5;
//	int b = a++;
//	int c = ++a;
//	int d = ++a + b++ + c;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	int b = ~a;
//	//�Ӳ����ȫ1���ȫ0��Ȼ����Ϊ���λ�����0����������ԭ������ͬ����ӡ����0
//	printf("%d\n", b);
//	//����һ��a���������ģ��������Ƕ������в������ָ���a
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	float f = 3.1f;
//	double d = 3.14;
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);//ȡ��������ÿ��Ԫ�صĵ�ַ
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//
//	a = a + 10;
//	b += 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = a++ || ++b || c++;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = a++ && ++b && c++;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a)
//	{
//		printf("Hello world\n");
//	}
//	if (!a)
//	{
//		printf("Hello asu\n");
//	}
//	if (b)
//	{
//		printf("hehe\n");
//	}
//	if (!b)
//	{
//		printf("welcom u\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("�������������:>");
//	scanf("%d", &age);
//	while (age != -1)
//	{
//		if (age < 18)
//		{
//			printf("δ����\n");
//		}
//		else if (age >= 18 && age <= 30)
//		{
//			printf("����\n");
//		}
//		else if (age > 30 && age < 50)
//		{
//			printf("׳��\n");
//		}
//		else if (age >= 50 && age <= 80)
//		{
//			printf("����\n");
//		}
//		printf("��������һ�����䣬�������-1���˳�:>");
//		scanf("%d", &age);
//	}
//
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//������жϷ���
//		//1.�ܱ�400����
//		//2.�ܱ�4�������Ҳ��ܱ�100����
//		//1��2�ķ��������жϣ������ǻ��ߵĹ�ϵ����2�������棬���������ǲ��ҹ�ϵ
//		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
	
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a < 20 || b < 20)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 30;
//	int age1 = 18;
//	if (14 < age && age < 28)
//	{
//		printf("����\n");
//	}
//	if (14 < age1 && age1 < 28)
//	{
//		printf("����1\n");
//	}
//}

//int main()
//{
//	int a = 3;//0011
//	int b = 5;//1001
//	int c = a & b;
//	printf("%d\n", c);//0001
//	c = a | b;
//	printf("%d\n", c);//1011
//	c = a ^ b;//ͬ0��1
//	printf("%d\n", c);//1010
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	//10000000000000000000000000000101--ԭ��
//	//11111111111111111111111111111010--���루ԭ�����λ���䣬����λ��λȡ����
//	//11111111111111111111111111111011--���루�����1��
//	int b = a >> 2;
//	//11111111111111111111111111111110--�������� �ұ�����1���綪������߲�����λ1
//
//	//11111111111111111111111111111110--���� ���λ��1���Ǹ�����������ԭ��
//	//11111111111111111111111111111101--���� �����1�÷���
//	//10000000000000000000000000000010--ԭ�� �������λ���䣬����λ��λȡ��
//	//���룬���λ��1��˵���Ǹ�����������ô���룬������ԭ��Ϳ�����
//
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int n = 4;
//	int m = n >> 1;
//	printf("n = %d\n", n);
//	printf("m = %d\n", m);
//	return 0;
//}

//int main()
//{
//	float a = 5.0f;
//	float b = 2.0f;
//	printf("%f\n", a / b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 3;
//	printf("%d", a % b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = a + b;//�ӷ�
//	int mul = a * b;//�˷�
//	int sz = sizeof(a);//�����ռ�ռ�Ĵ�С
//	if (a == b)
//	{
//		printf("���\n");
//	}
//	printf("%d %d %d", sum, mul, sz);
//	return 0;
//}
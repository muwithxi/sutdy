#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//�����֧����������
//int main()
//{
//#if 1+1
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++) 
//	{
//		arr[i] = 0;
//#if 1//#if����ĳ������ʽΪ�� ��ִ����� #if��#endif��һ��
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//�������� �������� ���룬��������� Ԥ�����ʱ���� ��Ԥ����ָ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG //û����DEBUG ����û�б����� �������#define DEBUG ������ ���ö���ʲô �Ϳ���������ӡ
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX;//ɾ����MAX�ͱ��δ�������
//	printf("%d\n", MAX);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	//int ret = SIZEOF(int);//������������������������飬������
//	//printf("%d\n", ret);
//	int* p = (int*)malloc(10*sizeof(int));
//	//��������
//	int* pa = MALLOC(10, int);//�ǲ��Ƿ����������ܶ�?
//	return 0;
//}

//#define MAX(X, Y) ((X)>(Y)?(X):(Y)) //*�滻�滻�滻 ���滻
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//��ĸ�����
//	//int max = (a++)>(b++)?(a++):(b++); 
//	//            10 > 11 ��  ��(b++)  �жϲ��� a�����11 b���12 b++�����ʹ�ú�++ max��ӡ����12 a=11�� b=13
//	printf("max = %d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#define MAX 10;
//#define PRINT(X) printf("The value of "#X" is %d\n", X)//ǰ�������ַ����ǿ����������ģ�#X����˼�ǣ����������ѷ��ſ���"����"�����������滻
//
//#define CLA(X, Y) X##Y
//int main()
//{
//	int Class110 = 2023;
//	printf("%d\n", Class110);
//	printf("%d\n", CLA(Class, 110));//Class##110����##�� -Class110�ϲ���ʶ��
//	return 0;
//}

//int main()
//{
//	// the same �ַ�������һ��
//	/*printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo " "wor""ld\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);//#������
//	//printf("The value of""a""is %d\n", a)
//	PRINT(b);
//	return 0;
//}

//void Print(int a)
//{
//	printf("The value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Print(a);
//	Print(b);//��������˵b��ֵ��20������b �����޷�ʵ�� �ú�
//	return 0;
//}

//int main()
//{
//	int a = MAX;//#define�����ض�����#define��������ݣ�#define�������ڵݹ�
//	printf("MAX = %d\n", a);//�ַ���MAX���ᱻ�滻
//	return 0;
//}

//#define MAX 10//�Լ�����ķ���
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)

//#define�����
//#define SQUARE(X) X*X//SQUARE(X)���Ǻ� �������в���
//#define DOUBLE(x) x+x
//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(a);//10*5+5 �������(x)*(x) ����10*(x)+(x)  ������((x)+(x)) �ܽ�:��Ҫ��������
//	//int ret = SQUARE(5);//�滻Ϊ5*5
//	//printf("%d\n", ret);
//	//int ret = SQUARE(5+1);//�����滻�����Ǵ��� 5+1*5+1 �������6*6 ��������(X)*(X)
//	//printf("ret = %d\n", ret);
//	return 0;
//}

//#define�������
//int main()
//{
//	int a = MAX;//����ڶ���MXA��ֵ���;�����׳����� ����͵���10;;
//	printf("%d\n", MAX);//����("%d\n"��10;��;��ⲻ��
//	return 0;
//}

//#��ͷ�Ķ���Ԥ����ָ�� ��Ԥ����׶δ���� #define #include #pragma()Ĭ�϶����� #if #endif #ifdef #line
//int main()
//{
//	do_forever;//for(;;);
//	//reg int a = 10;//����Ϊ�Ĵ�������
//	//int max = MAX;//Ԥ���봦��������10��
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//���֧�֣���ֵΪ1����֧����δ����
//}

//Ԥ�������:�����Լ�����ģ������Ѿ������ __FILE__
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	//printf("%s\n", __FILE__);//��������Դ�ļ��ľ���·�������ƣ�
//	//printf("%d\n", __LINE__);//�������ڵ��к�
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//д��־�ļ�
//	FILE* pf = fopen("log.txt", "w");
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "//file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����:���������ص��ڴ��У�����в���ϵͳ��һ���ɲ���ϵͳ��ɣ��������ֹ����ţ�Ҳ������ͨ����ִ�д�������ֻ���ڴ������
//����ʼִ�� ����main����
//��ʼִ�д��룬�ڴ��Ͽ��ٿռ�
//��ֹ����������ֹ��������ֹ
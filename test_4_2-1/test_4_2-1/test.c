#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Stu//����struct Stu�ṹ������
//{
//	char arr[5];//����
//	char arr1[12];//�绰���� 12����Ϊ�ַ�������и�б��0Ҫһ���ַ��Ŀռ�
//	int age;//����
//};
//int main()
//{
//	struct Stu s1 = { "����", "12345678911", 30 };
//	struct Stu* ps = &s1;
//	//�ṹ�������.�������ӳ�Ա��������
//	printf("%s ", s1.arr);
//	printf("%d ", s1.age);
//	printf("%s\n", s1.arr1);
//	//ָ���->��Ա��������                ->��Ա
//	printf("%s ", ps->arr);//ָ��ָ��ı����ĳ�Ա
//	printf("%d ", ps->age);
//	printf("%s\n", ps->arr1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);//%p�Ǵ�ӡ��ַ�ĸ�ʽ
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&ȡ��ַ��������int *  *����˼��pa��һ��ָ�� ��int����˼�� ָ��ָ��ı�����һ������
//	*pa = 20;//*�����������������ò���������ǰ����Ǹ���ͬ��ǰ�����һ��װ���ԵĴ��ڣ���������pa�Ǹ�ָ�����
//	//*pa����˼�� �Ա���pa���ֵ��a�ĵ�ַ�����н����ã��ҵ������ַָ��ı���Ҳ�����ҵ���a ��20����a
//	//�൱�� a = 20��
//	printf("a = %d\n", a);
//	return 0;
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 5;
//	u_int b = 5;//����������������һģһ��
//}

//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		static int j = 0;//�����int j = 0 ÿ��ѭ��������j�ͱ���ֵ��0������1�󣬴�ӡ�Ķ���1��
//		j++;            //��Ϊstatic���ξֲ�������ʹ��j���������for{}����鲻���Զ����٣��ۻ�����
//		printf("%d ", j);//���Ŵ�ӡ��1 2 3 4 5 6 7 8 9 10
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	printf("%d\n", a);//�ӳ��������ڲ�������������
//}
//int main()
//{
//	static int a = 10;
//	printf("%d\n", a);
//	test();
//}

//extern int glo_bal;
//int main()
//{
//	printf("%d\n", glo_bal);
//	return 0;
//}
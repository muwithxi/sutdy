#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>

//int main()
//{
//	unsigned char i = 0;//�޷��ŵ�����ѭ�����һ��Ҫע���������ǳ����׵�����ѭ��
//	for(i=0; i<=255; i++)
//	{
//		printf("hello,world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];//char���͵���ֵ��-128-127֮��
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	unsigned int i;//i��Ϊ�� iΪ-1��ʱ�� ����ȫ1��i�����Ǹ��������
//	for(i=9; i>=0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100- ԭ��
//	//11111111111111111111111111101011- ����
//	//11111111111111111111111111101100- ����
//	unsigned j = 10;
//	//00000000000000000000000000001010
//	printf("%d\n", i+j);
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	
//	//11111111111111111111111111110110- ��� -����
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010- -10
//	//���������ʽ�������㣬�����з������ʹ�ӡ
//	return 0;
//}
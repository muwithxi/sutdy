#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

//struct S
//{
//	char arr[20];
//	short age;
//	char name[10];
//};

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret; 
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if(dest<src)
//	{
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//		return (void*)src;
//	}
//	else
//	{
//		while(num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//			++(char*)dest;
//			++(char*)src;
//		}
//		return (void*)src;
//	}
//	return ret;
//}
//
////C���Ա�׼�涨:memcpyֻҪ�����ص����ڴ濽���Ϳ�����--60 ��VS����������Ҳ���Դ����ص���
////memmove�����ص����ڴ濽������ Ҳ���Դ����ص���--100
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);
//	//memcpy(arr+2, arr, 20);
//	my_memmove(arr+2, arr, 20);//�����������ڴ��ص��Ŀ������
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
	////������������
	//int arr1[] = {1,2,3,4,5,6};
	//int arr2[7] = {0};
	//struct S s1[] = {{"124875", 20, "����"}, {"45156", 25, "����"}};
	//struct S s2[3] = {0};
	//my_memcpy(arr2, arr1, sizeof(arr1));//void* dest const void* src size_t num �������ֽ���
	////�����ṹ��
	//my_memcpy(s2, s1, sizeof(s1));
	//return 0; 
}

//buffers�ǻ���������˼

//�ڴ溯��
//int main()
//{
//	//�ڴ溯���������ı���������ѽ���ṹ������ȷ��ַ�����
//	//��Ϊ�ַ��������Ĳ�����Щ���ͣ����Ͳ�ͬ�������ַ���������'\0'���������ж������������ı�־
//	int arr[] = {1,2,3,4,5};
//	int arr1[5] = {0};
//	int i = 0;
//	strcpy(arr1, arr); //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	for(i=0; i<5; i++)//�����ֽ� 00 ��ֹͣ��ӡ��
//	printf("%d ", arr1[i]);
//	//������memcpy memmove memcmp memset
//	//void*������ָ�룬�������ض���char*���͵��ַ�������
//	return 0;
//}

//�ַ�ת������
//int main()
//{
//	char arr[] = "I am S J R fROm CHinA";
//	int i = 0;
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
	//int tolower(int c)��дתСд �⺯�� �����Ǵ�д��ĸ��ȥ32�õ���ӦСд��ĸ
	//int upper(int c)Сдת��д �⺯��
	/*char ch = 'Q';
	char c = 'q';
	putchar(tolower(ch));
	putchar(toupper(c));*/
//}

//�ַ����ຯ��
//int main()
//{
//	char ch = '2';
//	/*char ch = 'A';*/
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	//char ch = 'w';
//	//int ret = islower(ch);//(int)��������ַ����������ͣ��򷵻ط�0ֵ�������Ͼͷ���0
//	//printf("%d\n", ret);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <Windows.h>

//NULL-��ָ��
//NUL��Null-'\0'
//strstr-�����ַ���-���ַ���
//int main()
//{
//	char* p1 = "haonanabiancheng";
//	char* p2 = "nan";
//	char* p = strstr(p1, p2);
//	if(p == NULL)
//		printf("�ַ���������\n");
//	else
//		printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abczferf";
//	const char* p2 = "abcserewz";
//	//int ret = strncmp(p1, p2, 3);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strncat(char* dest, char* src, int count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest++ != '\0');
//	dest--;
//	while(count--)
//	{
//		if(!(*dest++=*src++))
//			return ret;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "hello\0xxxxxxxxxxx";
//	char str2[] = "bit nihao";
//	char* p1 = my_strncat(str1, str2, 10);//����׷�Ӷ��ٸ����Ჹ'\0',׷�ӵ��ֽڴ���Դ�ַ�����������strcpy��'\0'
//	printf("%s\n", p1);
//	return 0;
//}

//char* my_strncpy(char* dest, char* src, int count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(count && (*dest++=*src++))
//	{
//		count--;
//	}
//	while(--count)
//		*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abccxxxx";
//	char arr2[] = "bit";
//	int k = 5;
//	char* p1= my_strncpy(arr1, arr2, k);//5��Ҫ��ӡ���ֽ���,strncpy�����Զ���'\0',���λ��'\0'
//	printf("%s\n", p1);
//	return 0;
//}

//int my_strcmp(char* str1, char*str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(char* str1, char*str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1-*str2);
//}
//
//int main()
//{
//	char* p1 = "abadef";
//	char* p2 = "abqfeq";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	char* p1 = "assert";
//	char* p2 = "dest";
//	int ret = strcmp(p1, p2);//��Ӧ�ַ��Ƚϣ���ASCII��ֵ����ȣ�����0���Ƚ���һ������һ���ַ������ڣ����ش���0������С�ڷ���С��0����
//	//��ȵ�����������ַ���������'\0'��ǰ�涼���
//	printf("%d\n", ret);
//	return 0;
//}

//char* strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while(*dest)
//		dest++;
//	while(*dest++=*src++)
//		system("1000");
//	return dest;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	strcat(arr1, arr1);
//	return 0;
//}

//��strcat���Լ�׷�ӻ���ѭ������Ϊhello\0 �ڸ�\0Ϊw��ʱ�� Դͷ��û��\0��
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	//����û���жϵ�һ��'\0'�Ƿ��Ѿ���dest�����һ��Ԫ������Ϊǰ����������
//	//1.���㹻�ռ� 2.��'\0'
//	while(*dest)
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxx";//׷�Ӵ�dest�ַ���'\0'��ʼ׷�ӣ�����src��'\0'Ҳ׷��
//	char arr2[] = "world";//Դ�ַ�����'\0'
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	//error arr1û���㹻�Ŀռ�
//	/*char arr1[] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����srcָ����ַ�����dest�ռ�ȥ
//	while(*dest++ = *src++)//һһ��ֵ����'\0'
//	{
//		;
//	}
//	//while(src != '\0')
//	//{
//	//	*dest++ = *src++;//�Ƚ����ø�ֵ�� ��ַ����һλ
//	//}
//	//*dest = *src;//��ӡ'\0'
//	//�Ż�dest�ռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "abcdefgih";//Ŀ��ռ�Ҫ�㹻��Ŀ���ַ���Ҫ�ܸı�
//	//error char *p = "abcdefgih";//�ǳ����ַ��������ܱ�
//	char str2[] = "bit";//Դ�ַ���Ҫ����'\0'
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	//strcpy(str1, str2);//(*dest, *src) ���'\0'Ҳ������ȥ
//	return 0;
//}

//size_t == unsigned int
//�⺯��strlen�ķ���������size_t
//int main()
//{
//	if(strlen("abc")-strlen("abcdef")>0)//3 - 6 = -3 ���޷��ŵ�-3�Ǵ���0����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//}

//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* ch)
//{
//	int count = 0;
//	assert(ch != NULL);
//	while(*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//int main()
//{
//	//������  ������Ϣ
//	//0- No Error
//	//1- ....
//	//.....
//	//
//	FILE* p = fopen("test.txt", "r");//ǰ��ĸ�ʽ���ļ����������Ǵ�ʽ��r�Ƕ�����˼ ���ļ�������FLIE*ָ��
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("file open success");
//	}
//	//��c���Կ⺯��������ʱ����Ѵ����븳ֵ��errno�У�ͷ�ļ�<errno.h>����һ��ȫ�ֱ�����
//	/*char* pa = strerror(errno);
//	printf("%s\n", pa);*/
//	//char* p = strerror(0);//������Ϣ���غ��� �Ѵ�����ת�ɴ�����Ϣ���ҷ������ĵ�ַ
//	/*printf("%s\n", p);*/
//	return 0;
//}

//strtok
//int main()
//{
//	char arr[] = "158.132.4556.7896";
//	char* p = ".";
//
//	char buf[300] = {0};
//	char* ret;
//	for(ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
	//strcpy(buf, arr);//arr�Ƿָ����ַ�����buf�Ǳ��и���ַ����������и�������и����Ϊ'\0'��������ʼ���ַ���ַ
	//ret = strtok(buf, p);//��һ�δ���ַ���ڶ��εȴ�NULL�����ϴα�Ϊ'\0'�ĵط����������ҷָ���������ҵ�'\0'������strtok�������һ���ַ���ַ������ǿ��ַ���������NULL
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	/*return 0;
}*/

//char* my_strstr(const char* str1, const char* str2)
//{
//	char* p1 = NULL;
//	char* p2 = NULL;
//	char* cur = (char*)str1;
//	assert(str1 && str2);
//	//�����ҵĲ�Ϊ'\0'�ַ���
//	if(!*str2)
//	{
//		return (char*)str1;
//	}
//	while(*cur)
//	{
//		p1 = cur;
//		p2 = (char*)str2;
//		while((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
//		{
//			p1++; 
//			p2++;
//		}
//		if(*p2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ch = my_strstr(p1, p2);
//	if(ch != NULL)
//	{
//		printf("%s\n", ch);
//	}
//	else
//	{
//		printf("���ַ���������\n");
//	}
//}
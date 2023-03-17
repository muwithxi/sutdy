#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//int main()
//{
//	//错误码  错误信息
//	//0- No Error
//	//1- ....
//	//.....
//	//
//	FILE* p = fopen("test.txt", "r");//前面的格式是文件名，后面是打方式，r是读的意思 打开文件，返回FLIE*指针
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("file open success");
//	}
//	//当c语言库函数发生误时，会把错误码赋值到errno中，头文件<errno.h>，是一个全局变量。
//	/*char* pa = strerror(errno);
//	printf("%s\n", pa);*/
//	//char* p = strerror(0);//错误信息返回函数 把错误码转成错误信息并且返回它的地址
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
	//strcpy(buf, arr);//arr是分隔符字符串，buf是被切割的字符串，遇到切割符，把切割符改为'\0'并返回起始的字符地址
	//ret = strtok(buf, p);//第一次传地址，第二次等传NULL，从上次变为'\0'的地方继续往后找分隔符，如果找到'\0'结束，strtok返回最后一个字符地址，最后是空字符串，返回NULL
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
//	//被查找的不为'\0'字符串
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
//		printf("子字符串不存在\n");
//	}
//}
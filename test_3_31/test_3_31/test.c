#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//#include <string.h>
//
//int my_strlen1(char arr[])
//{
//	//�ٸ�����strlen("hello") �ݹ��˼���Ǵ��»�С �Ѵ�Ļ���һ����ԭ�����Ƶ�С�����⣬����ʹ����ܼ�ࡣ
//	//1+strlen("ello")
//	//1+1+strlen("llo")
//}
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello, world";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", my_strlen(arr));//����������
//	printf("%d\n", my_strlen1(arr));//�ݹ�ʵ��
//	//printf("%d\n", my_strlen2(arr));
//	return 0;
//}

//---------------------------------------------------------------
//int my_strcmp1(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++ && str1);//��������һ���������
//	return *--str1 - *--str2;//ָ�����������
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)//str1����str2��ȥ
//	{
//		if (*str1 == '\0')//����һ����'\0'����ô��������'\0'��˵�������ַ���һ��
//		{
//			return 0;
//		}
//		str1++;//�������'\0'��������
//		str2++;
//	}
//	if (*str1 > *str2)//�ַ�����ȵ�������Ƚ��ַ��Ĵ�С
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* pc = "abcdef";
//	char* pc1 = "qwer";
//	int ret = my_strcmp1(pc, pc1);
//	if (ret > 0)
//	{
//		printf("pc>pc1");
//	}
//	else if (ret == 0)
//	{
//		printf("pc==pc1");
//	}
//	else
//	{
//		printf("pc<pc1");
//	}
	/*int ret = my_strcmp(pc, pc1);
	if (1 == ret)
	{
		printf("pc>pc1\n");
	}
	else if (-1 == ret)
	{
		printf("pc<pc1\n");
	}
	else if(0 == ret)
	{
		printf("pc==pc1\n");
	}*/
//	return 0;
//}
//---------------------------------------------------------------
// 
// 
//---------------------------------------------------------------
//char* my_strcat1(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)//����'\0'ʱ��ͣ�����ˣ�������һ��
//	{
//		dest++;
//	}
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++);//����'\0'ʱ��������һ�Σ���Ҫ��������Ϊ�Ǵ�'\0'��ʼ����׷�ӵ�
//	dest--;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr[20] = "welcom ";//�ռ��㹻����'\0'���ַ����ɸı䡣
//	char arr1[] = "to bit";//��'\0'��
//	/*printf("%s\n", my_strcat(arr, arr1));*/
//	printf("%s\n", my_strcat1(arr, arr1));
//	return 0;
//}
//---------------------------------------------------------------
// 
// 
//---------------------------------------------------------------
//char* my_strcpy1(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*src)//��*src��'\0'�ˣ���û�и�ֵ��*dest�Ĳ��裬Ҫ��һ����
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';//�����һ�ε���ʱ��dest��ָ����'\0'�÷ŵ�λ��
//	return ret;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello, world";//�ռ��㹻��С��Դͷ�ᵼ��Խ����ʡ��ַ������Ըģ�����ʹ���ַ�ָ��������һ���ַ������׵�ַ��
//	char arr1[] = "hi,bit";//����'\0'���ǽ�����������û�л�࿽��Щ���ֵ��ֱ������'\0'��������ʱ��Ҳ��Դͷ��'\0'������ȥ
//	/*printf("%s\n", my_strcpy(arr, arr1));*/
//	printf("%s\n", my_strcpy1(arr, arr1));
//	return 0;
//}
//---------------------------------------------------------------
// 
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}
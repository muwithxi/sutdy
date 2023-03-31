#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//#include <string.h>
//
//int my_strlen1(char arr[])
//{
//	//举个例子strlen("hello") 递归的思想是大事化小 把大的化成一个和原先相似的小的问题，可以使代码很简洁。
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
//	printf("%d\n", my_strlen(arr));//计数器方法
//	printf("%d\n", my_strlen1(arr));//递归实现
//	//printf("%d\n", my_strlen2(arr));
//	return 0;
//}

//---------------------------------------------------------------
//int my_strcmp1(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++ && str1);//最后多走了一步，需减掉
//	return *--str1 - *--str2;//指针相减是整数
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)//str1等于str2进去
//	{
//		if (*str1 == '\0')//其中一个是'\0'，那么两个都是'\0'就说明两个字符串一样
//		{
//			return 0;
//		}
//		str1++;//如果不是'\0'就往下走
//		str2++;
//	}
//	if (*str1 > *str2)//字符不相等的情况，比较字符的大小
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
//	while (*dest)//当是'\0'时就停下来了，不会多加一次
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
//	while (*dest++);//当是'\0'时，还加了一次，需要减掉，因为是从'\0'开始覆盖追加的
//	dest--;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr[20] = "welcom ";//空间足够大，有'\0'。字符串可改变。
//	char arr1[] = "to bit";//有'\0'。
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
//	while (*src)//当*src是'\0'了，就没有赋值给*dest的步骤，要加一步。
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';//在最后一次调整时，dest就指向了'\0'该放的位置
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
//	char arr[20] = "hello, world";//空间足够大，小于源头会导致越界访问。字符串可以改，不能使用字符指针来接收一个字符串的首地址。
//	char arr1[] = "hi,bit";//包含'\0'，是结束的条件，没有会多拷贝些随机值，直到遇到'\0'。拷贝的时候也把源头的'\0'拷贝过去
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//编程题：判断一个字符串是不是另一个串左旋、右旋得来的

//左旋字符串
#include <string.h>
void reverse(char arr[], int len, int k)
{
	//取模上字符串的长度 可以少操作一些
	k %= len;
	while (k--)
	{
		//记录第一个字符
		char tmp = arr[0];
		//将后面的字符往前挪动
		int i = 0;
		for (i = 1; i <= len - 1; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "ABCD";
	int k = 0;
	printf("%s\n", arr);
	scanf("%d", &k);
	int len = strlen(arr);
	reverse(arr, len, k);
	printf("%s\n", arr);
	return 0;
}

//bit 字符指针编程题 杨氏矩阵
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100][100] = { 0 };
//	int k = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			arr[i][j] = k++;
//		}
//	}
//	int x = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] = x)
//			{
//				printf("%d %d", i + 1, j + 1);
//				return 0;
//			}
//		}
//	}
//	printf("NO Find\n");
//	return 0;
//}



//猜凶手
//int main()
//{
//	char killer = 0;
//	//四个凶手的编码相差1
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//假设凶手分别是a，b，c，d 看看符不符合一人说假话，三人说真话的条件
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//bit 原反补 猜名次编程题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 3) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a = %d b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
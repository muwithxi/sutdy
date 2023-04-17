#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		ret = 1;
		for (j = 1; j<= i; i++)
		{
			ret *= j;
			sum += ret;
		}
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		putchar(ch + 32);
//		printf('\n');
//	}
//	return 0;
//}
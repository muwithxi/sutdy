#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Ի�ʣһ���Ӿ͹ػ��ˣ��������������ȡ���ػ�\n");
//		printf("������:>");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0);
//		{
//			system("shutdown -a");
//			printf("ȡ���ػ�\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 12;
//
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = (left + right) / 2;
//	int flag = 0;
//
//	while (left <= right)
//	{
//		if (arr[mid] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//		mid = (left + right) / 2;
//	}
//	if(flag == 0)
//	printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	int count = 3;
//	int flag = 0;
//	while (count)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			flag = 1;
//			break;
//		}
//		printf("�������\n");
//		count--;
//	}
//	if (flag == 0)
//		printf("�˳���¼\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = "********************";
//	scanf("%s", arr);//�����ַ������Զ����'\0'
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcom to bit!!!!!";
//	char arr1[] = "******************";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	//n = 3;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
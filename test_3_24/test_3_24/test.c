#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��10�����������ֵ
//int main()
//{
	//int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//int i = 0;
	//int max = 0;//error Ӧ��ֵ����Ԫ��
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int max = arr[0];
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);
//	return 0;
//}

//��1/1-1/2+1/3-...-1/100��ֵ
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//��1/1+1/2+...+1/100�ĺ�
//int main()
//{
//	double sum = 0.0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%lf", sum);//5.187378
//	return 0;
//}

//��ӡ1-100����֮��9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λΪ9
//		{
//			count++;
//		}
//		if (i / 10 == 9)//ʮλΪ9
//		{
//			count++;
//		}
//			//i = i / 10;//��Ҫ������ѭ������ı�ѭ������
//	}
//	printf("%d", count);
//	return 0;
//}

//��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("******* 1.play  0.exit *******\n");
//}
//
//void game()
//{
//	//1.�������һ����
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//................................................

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}

//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcom to bit !!!! !!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//'\0'���㳤��  �±���-1 ����-1�͹���
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//	//char arr1[] = "welcom to bit !!!! !!!!";
//	//char arr2[] = "#######################";
//	//int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//ĩβ��'\0'Ԫ���Լ��±���-1 ����-2
//	//while (left <= right)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//	Sleep(1000);
//	//	system("cls");
//	//}
//	//printf("%s\n", arr2);
//	//return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	/*int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <=n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);*/
//	//int n = 0;
//	//int i = 0;
//	//int sum = 1;
//	//scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	sum *= i;//sum * i1 * i2 * i3 * i4...
//	//}
//	//printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N��");
//	while((ch = getchar()) != '\n');//������뻺����
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	//int ret = 0;
//	//char password[20] = { 0 };
//	//printf("����������:>");
//	//scanf("%s", password);
//	//printf("��ȷ�ϣ�Y/N��");
//	//getchar();//������뻺����
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("ȷ�ϳɹ�\n");
//	//}
//	//else
//	//{
//	//	printf("����ȷ��\n");
//	//}
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl+z ����
//	//{
//	//	putchar(ch);
//	//}
//	return 0;
//}

//int half_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = half_search(arr, k, sz);
//	if (ret)
//		printf("�ҵ����±���%d", ret);
//	else
//		printf("�Ҳ���");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
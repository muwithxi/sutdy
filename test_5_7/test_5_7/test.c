#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////升序冒泡排序
//void Bubble_Sort(int* arr, int sz)
//{
//	int i = 0;
//	//判断是否提前结束的标志
//	int flag = 1;
//	//总共有元素减1趟
//	for (i = 0; i < sz; i++)
//	{
//		//比较次数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			return;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_Sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//#define Max 10
//
//void ArrReverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void ArrInit(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[Max] = {1,2,3,4,5,6,7,8,9,10};
//	//ArrInit(arr, Max);
//	Print(arr, Max);
//	ArrReverse(arr, Max);
//	Print(arr, Max);
//	return 0;
//}

//void Swap(int arr1[], int arr2[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 9,8,7,6,5,4,3,2,1,};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr1[%d] = %d ", i, arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	printf("\n");
//	Swap(arr1, arr2, sz);
//	printf("交换后:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr1[%d] = %d ", i, arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//LeetCode 88合并两个有序数组
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int end1 = m - 1, end2 = n - 1;
    int end = m + n - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[end--] = nums1[end1--];
        }
        else
        {
            nums1[end--] = nums2[end2--];
        }
    }
    while (end2 >= 0)
    {
        nums1[end--] = nums2[end2--];
    }
}

//LeetCode 26删除有序数组中的重复项
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int i = 0, j = 1;
    int dst = 0;
    while (j < numsSize)
    {
        if (nums[i] == nums[j])
        {
            j++;
        }
        else
        {
            nums[dst] = nums[i];
            dst++;
            i = j;
            j++;
        }
    }
    nums[dst] = nums[i];
    dst++;
    return dst;
}

//LeetCode 27移除元素
int removeElement(int* nums, int numsSize, int val) {
    int src = 0, des = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[des] = nums[src];
            des++;
            src++;
        }
        else
        {
            src++;
        }
    }
    return des;
}
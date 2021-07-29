#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	if (len <= 1)
//	{
//		return;
//	}
//	int left = 0;
//	int right = len - 1;
//	char temp = str[left];
//	str[left] = str[right];
//	str[right] = '\0';
//	reverse_string(str + 1);
//	str[right] = temp;
//}
//
//int main()
//{
//	char str[] = "ninijbiub\n";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int x, y, j;
//
//    while (scanf("%d", &x) != EOF) {
// 
//        for (y = 0; y < x; y++)
//        {
//            for (j = 0; j < x; j++)
//            {
//                if (y == 0 || y == x - 1) {
//                    printf("* ");
//                }
//                else if (j == 0 || j == x - 1) {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            //printf("*");
//
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//#include <stdio.h>
//void Print(int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (i == 0 || i == n - 1)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//        }
//        else
//        {
//            printf("*");
//            int j = 0;
//            for (j = 0; j < 2 * n - 3; j++)
//            {
//                printf(" ");
//            }
//            printf("* ");
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        Print(n);
//        printf("\n");
//    }
//
//    return 0;
//}

//void bubble_sort(int nums[], int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				flag = 0;
//				int temp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = temp;
//			}
//		}
//
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//void Print(int nums[], int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 4,9,2,7,3,1,8,6,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}
//#define SIZE 9
//void Print(int nums[], int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//}
//void exangeArray(int nums1[], int nums2[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = nums1[i];
//		nums1[i] = nums2[i];
//		nums2[i] = temp;
//	}
//}
//
//int main()
//{
//	int nums1[SIZE] = { 1,2,3,4,5,6,7,8,9 };
//	int nums2[SIZE] = { -9,-8,-7,-6,-5,-4,-3,-2,-1 };
//	int sz = SIZE;
//	printf("交换前：\n");
//	Print(nums1, sz);
//	Print(nums2, sz);
//	printf("交换后：\n");
//	exangeArray(nums1, nums2, sz);
//	Print(nums1, sz);
//	Print(nums2, sz);
//
//	return 0;
//}

void init(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		nums[i] = 0;
	}
}

void Print(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void reverse(int* nums, int numsSize)
{
	int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		int temp = nums[left];
		nums[left] = nums[right];
		nums[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Print(arr, size);
	reverse(arr, size);
	Print(arr, size);
	init(arr, size);
	Print(arr, size);

	return 0;
}
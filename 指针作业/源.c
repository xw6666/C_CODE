#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//��ӡ�ϰ벿��
//	for (int i = 0; i < n; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		//��ӡ�ַ�
//		for (int j = 0; j < 1 + 2 * i; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (int i = 0; i < n - 1; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%c", ' ');
//		}
//		//��ӡ�ַ�
//		for (int j = 0; j < (n - 1 - i) * 2 - 1; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n * 2 - 1);
//
//	return 0;
//}

//int my_strlen(char* strs)
//{
//	if (*strs == '\0')
//	{
//		return 0;
//	}
//
//	return my_strlen(strs + 1) + 1;
//}
//
//int* getNext(char* strs, int len)
//{
//	int* next = (int*)malloc(sizeof(int) * len);
//	next[0] = 0;
//	int i = 0;
//	int j = i + 1;
//	while (i < j && j < len)
//	{
//		if (strs[i] != strs[j])
//		{
//			if (i == 0)
//			{
//				next[j] = 0;
//				j++;
//			}
//			else
//			{
//				i = next[i - 1];
//			}
//		}
//		else
//		{
//			next[j] = next[j - 1] + 1;
//			j++;
//			i++;
//		}
//	}
//
//	return next;
//}
//
//char* find_char(char const* source, char const* chars)
//{
//	int len1 = my_strlen(source);
//	int len2 = my_strlen(chars);
//	int* next = getNext(source, len2);
//	int i = 0;
//	int j = 0;
//	while (i < len1 && j < len2)
//	{
//		if (source[i] == chars[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			if (j == 0)
//			{
//				i++;
//			}
//			else
//			{
//				j = next[j - 1];
//			}
//		}
//	}
//	if (j == len2)
//	{
//		return source + i - j;
//	}
//	
//	return NULL;
//}
//
//int del_substr(char* str, char const* substr)
//{
//	char* tag = find_char(str, substr);
//	if (tag == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int len2 = my_strlen(substr);
//
//			//ABCDEFGH
//			//CDE len2 = 3
//		char* begin = tag + len2;
//		int len = my_strlen(begin);
//		for (int i = 0; i < len; i++)
//		{
//			*tag = *begin;
//			tag++;
//			begin++;
//		}
//		*tag = '\0';
//	}
//
//	return 1;
//}
//
//int main()
//{
//	char str1[] = "ABCDEFG";
//	char str2[] = "CBE";
//	
//	int ret = del_substr(str1, str2);
//	printf("ret = %d, str1 = %s\n", ret, str1);
//
//	return 0;
//}

//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	while (left < right)
//	{
//		int temp = *(string + left);
//		*(string + left) = *(string + right);
//		*(string + right) = temp;
//		left++;
//		right--;
//	}
//}


//�������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int dp[100][100];
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				dp[i][j] = 1;
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//			}
//			printf("%d ", dp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));  //16 - ��������Ĵ�С
// 	printf("%d\n", sizeof(a + 0));//4 - ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));//4 - ��Ԫ��
//	printf("%d\n", sizeof(a + 1));//4 - �ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));//4 - ����ĵ�ַ
//	printf("%d\n", sizeof(*&a));//16 - �������������������������С
//	printf("%d\n", sizeof(&a + 1));//4 - �����һ����ַ
//	printf("%d\n", sizeof(&a[0]));//4 - ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4 - �ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}



//int cmp_by_int(int* e1, int* e2)
//{
//	return *e1 - *e2;
//}
//
//int cmp_by_float(const void* e1, const void* e2)
//{
//	return (*((float*)e1) - *((float*)e2));
//}
//
//
//int main()
//{
//	int nums1[] = { 9,8,7,6,5,4,3,2,1 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int (*p)(int*, int*) = cmp_by_int;
//	qsort(nums1, size1, sizeof(int), p);
//	for (int i = 0; i < size1; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//	printf("\n");
//
//	float nums2[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	qsort(nums2, size2, sizeof(float), cmp_by_float);
//	for (int i = 0; i < size2; i++)
//	{
//		printf("%lf ", nums2[i]);
//	}
//	
//	return 0;
//}



//���Ͼ������
//bool matrixSearch(int (*nums)[3], int row, int col, int target)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i < row && j >= 0)
//	{
//		if (nums[i][j] == target)
//		{
//			return true;
//		}
//		else if (nums[i][j] > target)
//		{
//			j--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//
//	return false;
//}
//
//
//int main()
//{
//	int nums[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int** p = nums;
//	if (matrixSearch(p, 3, 3, 10) == true)
//	{
//		printf("�ҵ��ˣ�");
//	}
//	else
//	{
//		printf("û�ҵ���");
//	}
//	
//	return 0;
//}
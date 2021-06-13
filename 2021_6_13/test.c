#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//leetcode 278;
//bool isBadVersion(int version)
//{
//	if (version >= 4)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int firstBadVersion(int n)
//{
//	int left = 1;
//	int right = n;
//	while (left < right)
//	{
//		int mid = left + (right - left) / 2;
//		if (isBadVersion(mid))
//		{
//			right = mid;
//		}
//		else
//		{
//			left = mid + 1;//注意这个加1，因为我们要找的结果已经不可能出现在mid上了
//		}
//	}
//	return right;
//}
//
//void test()
//{
//	//firstBadVersion(5);
//	printf("%d\n", firstBadVersion(5));
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//leetcode 28

void getNext(int next[], char* str, int len)
{
	int i = 0;
	int j = 1;
	next[0] = 0;
	while (j < len)
	{
		if (str[j] == str[i])
		{
			i++;
			j++;
			next[j - 1] = i;
		}
		else
		{
			if (i == 0)
			{
				j++;
				next[j - 1] = 0;
			}
			else
			{
				i = next[i - 1];
			}
		}
	}
}

int strStr(char* haystack, char* needle)
{
	if (strlen(needle) == 0)
	{
		return 0;
	}

	//kmp算法
	int i = 0;
	int j = 0;
	int len1 = strlen(haystack);
	int len2 = strlen(needle);
	int* next = (int*)malloc(sizeof(int) * len2);
	getNext(next, needle, len2);
	while (i < len1 && j < len2)
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			if (j == 0)
			{
				i++;
			}
			else
			{
				j = next[j - 1];
			}
		}
	}
	if (j == len2)
	{
		return i - len2;
	}
	else
	{
		return -1;
	}
}
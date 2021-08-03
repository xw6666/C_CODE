#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//打印上半部分
//	for (int i = 0; i < n; i++)
//	{
//		//打印空格
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		//打印字符
//		for (int j = 0; j < 1 + 2 * i; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (int i = 0; i < n - 1; i++)
//	{
//		//打印空格
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%c", ' ');
//		}
//		//打印字符
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

int my_strlen(char* strs)
{
	if (*strs == '\0')
	{
		return 0;
	}

	return my_strlen(strs + 1) + 1;
}

int* getNext(char* strs, int len)
{
	int* next = (int*)malloc(sizeof(int) * len);
	next[0] = 0;
	int i = 0;
	int j = i + 1;
	while (i < j && j < len)
	{
		if (strs[i] != strs[j])
		{
			if (i == 0)
			{
				next[j] = 0;
				j++;
			}
			else
			{
				i = next[i - 1];
			}
		}
		else
		{
			next[j] = next[j - 1] + 1;
			j++;
			i++;
		}
	}

	return next;
}

char* find_char(char const* source, char const* chars)
{
	int len1 = my_strlen(source);
	int len2 = my_strlen(chars);
	int* next = getNext(source, len2);
	int i = 0;
	int j = 0;
	while (i < len1 && j < len2)
	{
		if (source[i] == chars[j])
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
		return source + i - j;
	}
	
	return NULL;
}

int del_substr(char* str, char const* substr)
{
	char* tag = find_char(str, substr);
	if (tag == NULL)
	{
		return 0;
	}
	else
	{
		int len2 = my_strlen(substr);

			//ABCDEFGH
			//CDE len2 = 3
		char* begin = tag + len2;
		int len = my_strlen(begin);
		for (int i = 0; i < len; i++)
		{
			*tag = *begin;
			tag++;
			begin++;
		}
		*tag = '\0';
	}

	return 1;
}
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



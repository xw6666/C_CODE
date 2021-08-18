#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//int main()
//{
//	char str[20] = "Hello there, honey";
//	char* ans = NULL;
//	ans = strchr(str, 'g');
//	if (ans != NULL)
//	{
//		printf("%c\n", *ans);
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//
//	return 0;
//}


//strtok

//void print_tokens(char* line)`
//{
//	static char whitespace[] = "\t\f\r\v\n";
//	char* token;
//	
//	for (token = strtok(line, whitespace); token != NULL; token = strtok(NULL, whitespace))
//	{
//		printf("Next token is %s\n", token);
//	}
//}
//4* p = NULL;
//	//strtok函数，第一个参数传入字符串，第二个参数传入在字符串中需要删除的标志
//	//如果找到了这个标志，返回这个标志之前的字符串，之后函数会记住这个位置
//	//之后如果传入第一个参数为NULL，由于函数记住了之前字符串的那个标志点
//	//所以会在那个字符串那继续查找，如果有标志，继续返回字符串，如果没有标志，返回NULL
//	for (p = strtok(line, &ch); p != NULL; p = strtok(NULL, &ch))
//	{
//		printf("%s", p);
//	}
//}
//int main()
//{
//	char str[] = "14@8@101@61@31";
//
//	char mem[] = "!@#$%^&*()";
//	
//	char* p = NULL;
//	for (p = strtok(str, mem); p != NULL; p = strtok(NULL, mem))
//	{
//		printf("%s", p);
//	}
//	return 0;
//}

//int main()
//{
//	char ret = tolower('7');
//	printf("%c\n", ret);
//	return 0;
//}

//int main()
//{
//	//测试mencpy
//	int nums1[] = { 1,2,3,4,5 };
//	int nums2[] = { 6,7,8,9,10 };
//
//	memcpy(nums1, nums2, 5 * sizeof(int));
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//	return 0;
//}


//编写一个程序，从标准输入读取一些字符，并统计下列各类字符所占百分比
//控制字符 空白字符 数字 小写字母 大写字母 标点符号 不可打印字符
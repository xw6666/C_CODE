#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int main()
//{
//	char a = 128;
//	//0000000000000000000000010000000
//	//10000000
//	//1111111111111111111111110000000
//	long long b = pow(2, 32) - pow(2, 7);
//	printf("%lld\n", b);
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//10000000000000000000000000010100 - 原
//	//11111111111111111111111111101011 - 反
//	//11111111111111111111111111101100 - 补
//	//00000000000000000000000000001010
//
//	//11111111111111111111111111110110 - 补
//	//10000000000000000000000000001010 - 原 - -10
//	
//	printf("%d\n", i + j);
//
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//
//	return 0;
//}

//int main()
//{
//	float a = 9.0f;
//	//00 00 10 41
//
//	return 0;
//}

//左旋函数
void leftReverse(char* str, int k)
{
	int len = strlen(str);
	k = k % len;
	if (0 == k)
	{
		return;
	}

	char* str2 = (char*)malloc(sizeof(char) * len);
	if (NULL == str2)
	{
		printf("str2 malloc失败\n");
		exit(-1);
	}
	int temp = 0;
	for (int i = k; i < len; i++)
	{
		str2[temp++] = str[i];
	}
	for (int i = 0; i < k; i++)
	{
		str2[temp++] = str[i];
	}
	//拷贝回去
	for(int i = 0;i < len;i++)
	{
		str[i] = str2[i];
	}
	
	free(str2);
	str2 = NULL;
}

//s1是s2旋转得到返回1，不是旋转得到返回0
int isReverse(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	char* str = (char*)malloc(sizeof(char) * (len2 + 1));
	strcpy(str, s2);
	while (len2)
	{
		leftReverse(str, 1);
		if (strcmp(s1, str) == 0)
		{
			//匹配成功
			return 1;
		}
		len2--;
	}
	return 0;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int ret = isReverse(s1, s2);
	if (1 == ret)
	{
		printf("s1是由s2旋转得到的\n");
	}
	else
	{
		printf("s1不是由s2旋转得到的\n");
	}
}
//int main()
//{
//
//	while (1)
//	{
//		char str[] = "ABCDEF";
//		int k = 0;
//		scanf("%d", &k);
//		leftReverse(str, k);
//		printf("%s\n", str);
//	}
//	return 0;
//}
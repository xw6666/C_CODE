#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
//生成一个其值等于常量字符串s的串t
void StrAssign(char t[], const char* s)
{
	assert(s != NULL);
	while (*t++ = *s++)
	{
		;
	}
}

//将串res的内容拷贝到des中
char* Mystrcpy(char* des, char* res)
{
	assert(des != NULL);
	assert(res != NULL);
	char* start = des;
	while (*start++ = *res++)
	{
		;
	}
	return des;
}
//用sub返回字符串s的第pos个字符起始长度为len的新串 
char* SubString(char* sub, char* s, int pos, int len)
{
	assert(s != NULL);
	assert(pos >= 1 && pos <= strlen(s));
	//让cur从pos处开始复制
	char* cur = s + pos - 1;
	//创建一个够用的数组用于存储复制结果
	//char *cur = sub;
	char* ptr = sub;
	//循环len次
	while (len--)
	{
		*ptr++ = *cur++;
	}

	return sub;
}

//朴素的字符串匹配算法
void Mystrstr(char* s, char* t)
{
	//双指针用于匹配
	int i = 0;
	int j = 0;
	//当两个指针都在长度范围内才能进入循环
	while (i < strlen(s) && j < strlen(t))
	{
		//如果相等，则匹配成功，各往后进一
		//否则i回归到初始位置的下一位 j回归到0
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	
	if (j == strlen(t))
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
}


//kmp字符串匹配算法
void Next(char* t,int* next)
{
	assert(t != 0);
	next[0] = 0;
	int len = strlen(t);
	int cur = 1;
	while (cur < len)
	{    
		//ababaaaba
		if (t[0] != t[cur-1])
		{
			next[cur] = 1;
		}
		else
		{
			//找公共前后缀
			next[cur] = next[cur - 1] + 1;
		} 
		cur++;
	}
}
int main()
{
	//char* s = "abcde";
	//char t[] = "abcdef";
	//char s[20] = { 0 };
	//char sub[20] = { 0 };
	//SubString(sub, t, 2, 3);
	//printf("%s\n", sub);
	//Mystrcpy(s, t);
	//printf("%s\n", s);
	//printf("%c\n", *(++s));
	//StrAssign(t, s);
	char s[] = "ababaaaba";
	//char t[] = "cde";
	//Mystrstr(s, t);
	int next[10] = { 0 };
	Next(s, next);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", next[i]);
	}
	return 0;
}
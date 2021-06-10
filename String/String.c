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
	return 0;
}
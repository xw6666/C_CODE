#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
//����һ����ֵ���ڳ����ַ���s�Ĵ�t
void StrAssign(char t[], const char* s)
{
	assert(s != NULL);
	while (*t++ = *s++)
	{
		;
	}
}

//����res�����ݿ�����des��
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
//��sub�����ַ���s�ĵ�pos���ַ���ʼ����Ϊlen���´� 
char* SubString(char* sub, char* s, int pos, int len)
{
	assert(s != NULL);
	assert(pos >= 1 && pos <= strlen(s));
	//��cur��pos����ʼ����
	char* cur = s + pos - 1;
	//����һ�����õ��������ڴ洢���ƽ��
	//char *cur = sub;
	char* ptr = sub;
	//ѭ��len��
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
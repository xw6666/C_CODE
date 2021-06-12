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

//���ص��ַ���ƥ���㷨
void Mystrstr(char* s, char* t)
{
	//˫ָ������ƥ��
	int i = 0;
	int j = 0;
	//������ָ�붼�ڳ��ȷ�Χ�ڲ��ܽ���ѭ��
	while (i < strlen(s) && j < strlen(t))
	{
		//�����ȣ���ƥ��ɹ����������һ
		//����i�ع鵽��ʼλ�õ���һλ j�ع鵽0
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
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
}


//kmp�ַ���ƥ���㷨
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
			//�ҹ���ǰ��׺
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
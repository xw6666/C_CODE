#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
void getNext(char* s, int next[])
{
	assert(s != NULL);
	int i = 0;
	int j = 1;//用指针j去填充next
	next[0] = 0;//next的第一个元素一定是0
	int len = strlen(s);
	while (j < len)
	{
		//当i与j匹配上时，两个指针一起移动 next[j]的值来自i
		//因为i还承担着记录已有公共前后缀的作用
		//否则i需要通过前缀表回溯(前缀表用于记录相等前后缀)
		//这样可以直接把i定位到需要匹配的位置上
		if (s[i] == s[j])
		{
			i++;
			j++;
			next[j - 1] = i;
		}
		else
		{
			//分类讨论 - i等于0就不回溯了，否则造成死循环
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

char* kmp(char* s, char* t)
{
	int i = 0;
	int j = 0;
	int Slen = strlen(s);
	int Tlen = strlen(t);
	int* next = (int*)malloc(Tlen * sizeof(int));
	getNext(t, next);
	while (i < Slen && j < Tlen)
	{
		if (s[i] == t[j])
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
	//i-Tlen+1
	if (j == Tlen)
	{
		return s + i - Tlen;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	char s[] = "ababaaaba";
	char t[] = "baaa";
	char* ps = kmp(s, t);
	printf("%s\n", ps);
	return 0;
}
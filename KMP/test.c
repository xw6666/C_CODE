#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>   
#include <stdlib.h>   

	

getNext(int* next, char* s)
{
	int j = 1;
	int i = 0;
	next[0] = 0;
	int len = strlen(s);
	while (j <= len)
	{
		//如果相等，则可以得到next的值
		//否则就回溯，回溯不需要管j咋变，因为j始终由if中的语句改变
		if (s[j] == s[i])
		{
			next[j] = i + 1;
			i++; 
			j++;
		}
		else
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
	}
}

void kmp(char* s, char* t)
{
	int tLen = strlen(t);
	int sLen = strlen(s);
	int* next = (int*)malloc(tLen * sizeof(int));
	getNext(next, t);
	int i = 0;
	int j = 0;
	while (i < sLen && j < tLen)
	{
		//匹配，i不回溯
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			//不匹配分两种
			//t串一上来就不匹配，那么i迭代
			//反之j需要回溯
			if (j == 0)
			{
				i++;
			}
			else
			{
				j = next[j - 1];//回到匹配过的前缀的下一位
			}
			//j = next[j - 1];//回到匹配过的前缀的下一位
		}
	}
	if (j == tLen)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
}

int main()
{
	char s[] = "ababaaaba";
	//int next[10] = { 0 };
	//getNext(next, s);
	//for (int i = 0; i < 9; i++)
	//{
	//	printf("%d", next[i]);
	//}
	char t[] = "baba";
	kmp(s, t);
	return 0;
}
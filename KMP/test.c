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
		//�����ȣ�����Եõ�next��ֵ
		//����ͻ��ݣ����ݲ���Ҫ��jզ�䣬��Ϊjʼ����if�е����ı�
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
		//ƥ�䣬i������
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			//��ƥ�������
			//t��һ�����Ͳ�ƥ�䣬��ôi����
			//��֮j��Ҫ����
			if (j == 0)
			{
				i++;
			}
			else
			{
				j = next[j - 1];//�ص�ƥ�����ǰ׺����һλ
			}
			//j = next[j - 1];//�ص�ƥ�����ǰ׺����һλ
		}
	}
	if (j == tLen)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
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
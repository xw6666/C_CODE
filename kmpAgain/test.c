#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
void getNext(char* s, int next[])
{
	assert(s != NULL);
	int i = 0;
	int j = 1;//��ָ��jȥ���next
	next[0] = 0;//next�ĵ�һ��Ԫ��һ����0
	int len = strlen(s);
	while (j < len)
	{
		//��i��jƥ����ʱ������ָ��һ���ƶ� next[j]��ֵ����i
		//��Ϊi���е��ż�¼���й���ǰ��׺������
		//����i��Ҫͨ��ǰ׺�����(ǰ׺�����ڼ�¼���ǰ��׺)
		//��������ֱ�Ӱ�i��λ����Ҫƥ���λ����
		if (s[i] == s[j])
		{
			i++;
			j++;
			next[j - 1] = i;
		}
		else
		{
			//�������� - i����0�Ͳ������ˣ����������ѭ��
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
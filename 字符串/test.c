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
//		printf("û���ҵ�\n");
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
//	//strtok��������һ�����������ַ������ڶ��������������ַ�������Ҫɾ���ı�־
//	//����ҵ��������־�����������־֮ǰ���ַ�����֮�������ס���λ��
//	//֮����������һ������ΪNULL�����ں�����ס��֮ǰ�ַ������Ǹ���־��
//	//���Ի����Ǹ��ַ����Ǽ������ң�����б�־�����������ַ��������û�б�־������NULL
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
//	//����mencpy
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


//��дһ�����򣬴ӱ�׼�����ȡһЩ�ַ�����ͳ�����и����ַ���ռ�ٷֱ�
//�����ַ� �հ��ַ� ���� Сд��ĸ ��д��ĸ ������ ���ɴ�ӡ�ַ�
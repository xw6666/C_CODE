#define _CRT_SECURE_NO_WARNINGS 1
#include "Caculator.h"
void menu()
{
	printf("*************************************\n");
	printf("******* 1. ����         0. �˳�******\n");
	printf("*************************************\n");
}

void caculator()
{
	printf("��������ʽ: ");
	Stack s;
	InitStack(&s);
	//��ȡ����
	char* userInput = (char*)malloc(100 * sizeof(char));
	if (userInput == NULL)
	{
		exit(-1);
	}
	scanf("%s", userInput);
	//�����ȡ�ı��ʽ
	printf("\n");
	//��������֣�ֱ������
	//���ַ�����ջ�����ȼ����߲��ܽ�
	char* suff = (char*)malloc(100 * sizeof(char));
	for (int i = 0; i < strlen(userInput);)
	{
		if (userInput[i] >= '0' && userInput[i] <= '9')
		{
			suff[i] = userInput[i];
			i++;
		}
		else
		{
			//���ȼ����߻���û��Ԫ�ص�ʱ���ջ
			if (Exchange(s.data[s.top]) < Exchange(userInput[i]) || s.top == -1)
			{
				PushStack(&s, userInput[i]);
			}
			else
			{
				//���γ�ջ֮���ջ
				while (s.top != -1)
				{
					s.data[s.top]
				}
			}
		}
	}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//���������
			caculator();
			break;
		case 0:
			//�˳�
			printf("�˳��ɹ���\n");
			break;
		default:
			printf("����Ƿ������������룡>\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	//menu();
	return 0;
}
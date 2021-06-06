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
	int j = 0;
	for (int i = 0; i < strlen(userInput);i++)
	{
		if (userInput[i] >= '0' && userInput[i] <= '9')
		{
			suff[j] = userInput[i];
			j++;
		}
		else
		{
			//���ȼ����߻���û��Ԫ�ص�ʱ���ջ
			if (Exchange(userInput[i]) == RIGHT_PEREN)
			{
				//�����������һֱ��ջ��������
				PopStack(&s);
				while (Exchange(s.data[s.top]) != LEFT_PEREN)
				{
					suff[j] = PopStack(&s);
					j++;
				}
				PopStack(&s);
			}
			else if (Exchange(s.data[s.top]) < Exchange(userInput[i]) || s.top == -1)
			{
				PushStack(&s, userInput[i]);
			}
			else
			{
				//���γ�ջ֮���ջ
				while (s.top != -1)
				{
					suff[j] = PopStack(&s);
					j++;
				}
				//��ջ
				PushStack(&s, userInput[i]);
			}
		}
	}
	suff[j] = '\0';
	printf("%s\n", suff);
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
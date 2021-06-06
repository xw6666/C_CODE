#define _CRT_SECURE_NO_WARNINGS 1
#include "Caculator.h"
void menu()
{
	printf("*************************************\n");
	printf("******* 1. 计算         0. 退出******\n");
	printf("*************************************\n");
}

void caculator()
{
	printf("请输入表达式: ");
	Stack s;
	InitStack(&s);
	//读取数据
	char* userInput = (char*)malloc(100 * sizeof(char));
	if (userInput == NULL)
	{
		exit(-1);
	}
	scanf("%s", userInput);
	//处理读取的表达式
	printf("\n");
	//如果是数字，直接跳过
	//是字符，进栈，优先级更高才能进
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
			//优先级更高或者没有元素的时候进栈
			if (Exchange(userInput[i]) == RIGHT_PEREN)
			{
				//如果是右括号一直出栈到左括号
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
				//依次出栈之后进栈
				while (s.top != -1)
				{
					suff[j] = PopStack(&s);
					j++;
				}
				//进栈
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
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//进入计算器
			caculator();
			break;
		case 0:
			//退出
			printf("退出成功！\n");
			break;
		default:
			printf("输入非法，请重新输入！>\n");
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
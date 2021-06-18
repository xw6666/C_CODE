#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("请注意，你的计算机将在一分钟后关机，请输入我是猪以停止关机！\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
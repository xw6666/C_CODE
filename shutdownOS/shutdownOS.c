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
		printf("����xw,��ע�⣬��ļ��������һ���Ӻ�ػ��������� xw��˧ ��ֹͣ�ػ���\n");
		scanf("%s", input);
		if (strcmp(input, "xw��˧") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
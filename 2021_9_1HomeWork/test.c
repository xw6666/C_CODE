#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��̬�����������벢���
int main()
{
	int n = 0;  //n��ʾҪ������ĸ���
	scanf("%d", &n);
	int* nums = (int*)malloc(sizeof(int) * n);  //��̬��������

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);  //��������
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}

	return 0;
}

//��ŵ��

//void hanoi(int n, char a, char b, char c)
//{
//	//��ȷ�������� - ��ӡ��n������char a ͨ��char b�ƶ���char c�Ĳ���
//	if (0 == n)
//	{
//		//���ֻ��0�����ӣ������ƶ�
//		return;
//	}
//	else
//	{
//		//������
//
//		//�ȴ�ӡn-1�����Ӵ�aͨ��c�ƶ���b�Ĳ���
//		hanoi(n - 1, a, c, b);
//		//����n�����Ӵ�aֱ���ƶ���c
//		printf("%c2%c\n", a, c);
//		//����ӡn-1�����Ӵ�bͨ��a�ƶ���c�Ĺ���
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;  //��ʾ��n������
//	scanf("%d", &n);
//
//	//��������
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//
//	hanoi(n, a, b, c);   //��ӡ��n�����Ӵ�aͨ��b�ƶ���c�Ĳ���
//
//	return 0;
//}
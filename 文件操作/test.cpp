#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ļ��������Ϸ��ࣺ�����ļ��������ļ�
//�ļ��������Ϸ��ࣺ�ı��ļ����������ļ�

//�ļ������������֣��ļ�·��+�ļ����ɼ��ļ���׺
//C:\code\test.txt   

//�ļ��Ĵ򿪺͹ر�

//�ļ�ָ��
//int main()
//{
//	FILE* pf = fopen("E:\\Codefield\\C_CODE\\�ļ�����\\data.txt", "r");  //����·��ֻ��
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	else
//	{
//		perror("fopen");
//	}
//	//д�ļ�
//	fputc('h', pf);
//	fputc('e', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	int n;
	double d;
	char name[20];
};

int main()
{
	//sscanf - ���ַ����ж�ȡһ����ʽ��������
	//sprintf - �Ӹ�ʽ�����ݶ�ȡ���ַ���
	char arr[100];
	struct S s = { 100,3.14,"zhangsan" };
	sprintf(arr, "%d %lf %s", s.n, s.d, s.name);
	printf("%s\n", arr);
	struct S temp = { 0 };
	sscanf(arr, "%d %lf %s", &(temp.n), &(temp.d), &(temp.name));
	printf("%d %lf %s\n", temp.n, temp.d, temp.name);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//文件从数据上分类：程序文件和数据文件
//文件从类型上分类：文本文件，二进制文件

//文件名包含三部分：文件路径+文件主干加文件后缀
//C:\code\test.txt   

//文件的打开和关闭

//文件指针
//int main()
//{
//	FILE* pf = fopen("E:\\Codefield\\C_CODE\\文件操作\\data.txt", "r");  //绝对路径只读
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
//	//写文件
//	fputc('h', pf);
//	fputc('e', pf);
//
//	//关闭文件
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
	//sscanf - 从字符串中读取一个格式化的数据
	//sprintf - 从格式化数据读取成字符串
	char arr[100];
	struct S s = { 100,3.14,"zhangsan" };
	sprintf(arr, "%d %lf %s", s.n, s.d, s.name);
	printf("%s\n", arr);
	struct S temp = { 0 };
	sscanf(arr, "%d %lf %s", &(temp.n), &(temp.d), &(temp.name));
	printf("%d %lf %s\n", temp.n, temp.d, temp.name);

	return 0;
}
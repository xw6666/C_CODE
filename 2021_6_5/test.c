#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int a = 10;//ȫ�ֱ���
//int main()
//{
//	int a = 100;//�ֲ�����
//	printf("%d\n", a);//��ӡ100 - �ֲ�����
//	return 0;
//}

//���������������������
//������
//�ֲ��������������Ǿֲ��������ڵķ�Χ
//ȫ�ֱ���������������������
//�������ڣ�
//�ֲ��������������ڣ�����ֲ��������ڷ�Χ�������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ������������ڣ��������������
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//
//	}
//	//printf("a = %d\n", a);
//	return 0;
//}
//int a = 100;
//void test()
//{
//	printf("test: a = %d\n", a);
//}
//int main()
//{
//	test();
//	printf("main: a = %d\n", a);
//
//	return 0;
//}
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	//�������ⲻ���������a��
//	return 0;
//}


//c���Գ�����
//���泣�� 
//const���εĳ�����
//#difine ����ı�ʶ������
//ö�ٳ���
//int main()
//{
//	//���������泣��
//	//3.14;
//
//	//int a = 1000;//�ֲ�����
//	//a = 200;
//	//һ���������ܱ��ı䣬˵�����г����� - ���ܱ��ı������
//	const int a = 1000; //�����Ǹ�����
//	printf("%d\n", a);
//	return 0;
//}

//֤��n�Ǳ���
//int main()
//{
//	const int n = 100;
//	int arr[n] = { 0 };//����
//  //˵��nֻ�Ǿ��г����ԣ����ܱ��޸Ķ��ѣ����ǳ�����ֻ�ǳ�����
//	return 0;
//}

//�Ա�
//enum Sex
//{
//	MALE,   //0
//	FEMALE, //1
//	SECRET  //2
//};
//
//int main()
//{
//	int a = MALE + FEMALE;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\768\test.c"));
//	return 0;
//
//}

//int main()
//{
//	char arr[] = "\130";
//	printf("%c\n", arr[0]);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("line = %d\n", ++line);
//		//line++;
//	}
//	return 0;
//}
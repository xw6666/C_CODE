#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	//printf("%s\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%s\n", __STDC__);   //vs��c��֧��ANSIC��__STDC__δ����
//
//	return 0;
//}


//#define �������
//#define �����

//#define MAX 100
//#define reg register
//#define STR "Hello world!"
//int main()
//{
//	int m = MAX;
//	reg int num = 200;
//	printf("m = %d\n", m);
//	printf(STR);
//	return 0;
//}

//#define DOUBLE(x) ((x) + (x))   //ע������
//
//#define PRINT(a) printf("The value of "#a" is %d.\n", a)
//#define MAX(a,b) ((a) > (b) ? (a) : (b))
//
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//PRINT(a);
//	//PRINT(b);
//
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//
//	printf("%d\n", max);
//
//	return 0;
//}

//���з�
//#define MALLOC(num, type) \
//	(type*)malloc(num * sizeof(type))
//
//int main()
//{
//	int* nums = MALLOC(10, int);
//
//	for (int i = 0; i < 10; i++)
//	{
//		nums[i] = i;
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#define MAX 0
//
//int main()
//{
//	//�ж�һ�������Ƿ񱻶���
//#if defined(MAX)
//	printf("max = %d\n", MAX);
//#endif
//
//	return 0;
//}  

//
//#define MAX(a,b) ((a++) > (b++) ? (a++) : (b++))
//
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//#define M 1000
//
//int main()
//{
//	int m = 10;
//#if M == 10
//	printf("haha\n");
//#elif M == 100
//	printf("hehe\n");
//#else
//	printf("none");
//#endif
//
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ��
//#include <stdio.h>
//#define SHIFT(type,elem) ((size_t)(&(((type*)0)->elem)))
////����ṹ������Ϊtype������ĳ����������Ϊelem
////����ṹ��洢��0��ַ�������Զ�0����ǿת�ṹ��ָ��
////ǿת��ָ���Ǹ��������Ͳ�ȡ��ַ���͵õ���ƫ�Ƶĵ�ַ
////֮����ǿתsize_t����
//
//struct Person
//{
//	int age;
//	double sex;
//};
//
//int main()
//{
//	auto ret = SHIFT(struct Person, sex);
//	printf("%d\n", ret);
//	return 0;
//}


#define SWAP_BIT(n) (n = (((n & 0x55555555) << 1) + ((n & 0xaaaaaaaa) >> 1)))

int main()
{
	int a = 10;
	printf("%d\n", a);
	SWAP_BIT(a);
	printf("%d\n", a);

	return 0;
}
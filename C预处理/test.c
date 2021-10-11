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
//	//printf("%s\n", __STDC__);   //vs的c不支持ANSIC，__STDC__未定义
//
//	return 0;
//}


//#define 定义符号
//#define 定义宏

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

//#define DOUBLE(x) ((x) + (x))   //注意括号
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

//续行符
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
//	//判断一个符号是否被定义
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

//写一个宏，计算结构体中某变量相对于首地址的偏移
//#include <stdio.h>
//#define SHIFT(type,elem) ((size_t)(&(((type*)0)->elem)))
////假设结构体类型为type，当中某个变量类型为elem
////假设结构体存储在0地址处，所以对0进行强转结构体指针
////强转后指向那个变量类型并取地址，就得到了偏移的地址
////之后再强转size_t类型
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
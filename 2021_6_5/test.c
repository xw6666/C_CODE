#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int a = 10;//全局变量
//int main()
//{
//	int a = 100;//局部变量
//	printf("%d\n", a);//打印100 - 局部优先
//	return 0;
//}

//变量的作用域和生命周期
//作用域：
//局部变量的作用域是局部变量所在的范围
//全局变量的作用域是整个工程
//生命周期：
//局部变量的生命周期：进入局部变量所在范围生命周期开始，出作用域声明周期结束
//全局变量的生命周期：程序的生命周期
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
//	//大括号外不能再用这个a了
//	return 0;
//}


//c语言常量：
//字面常量 
//const修饰的常变量
//#difine 定义的标识符常量
//枚举常量
//int main()
//{
//	//浮点型字面常量
//	//3.14;
//
//	//int a = 1000;//局部变量
//	//a = 200;
//	//一个变量不能被改变，说明具有常属性 - 不能被改变的属性
//	const int a = 1000; //它还是个变量
//	printf("%d\n", a);
//	return 0;
//}

//证明n是变量
//int main()
//{
//	const int n = 100;
//	int arr[n] = { 0 };//报错
//  //说明n只是具有常属性，不能被修改而已，不是常量，只是常变量
//	return 0;
//}

//性别
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
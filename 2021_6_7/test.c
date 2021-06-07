#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//位操作符号
// & - 按位与
// ^ - 按位异或
// | - 按位或
//int main()
//{
//	//int a = 3; //00000000000000000000000000000011 - 32位
//	//int b = 5; //00000000000000000000000000000101
//	//int c = a & b; //0...0001
//	//异或 - 相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	//int c = a ^ b;
//	int c = a | b;
//	printf("%d\n", c);
//
//	return 0;
//}


//赋值操作符
//int main()
//{
//	int a = 10;//声明变量a并且初始化为10
//	a = 20;//赋值
//	a += 10;//符合赋值
//	return 0;
//

//单目操作符 - 只有一个操作数
int main()
{
	int a =  1;
	printf("%d", ~a);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//递归
//void Print(unsigned int x)
//{
//	if (x > 9)
//	{
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int getDiget(int x)
//{
//	int diget = 0;
//	while (x)
//	{
//		diget++;
//		x /= 10;
//	}
//	return diget;
//}
//int main()
//{
//	int x = 1234;
//	int diget = getDiget(x);
//	printf("diget = %d\n", diget);
//	Print(x);
//	return 0;
//}

//编写函数，不允许使用临时变量求字符串长度
//int myStrlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	return myStrlen(str + 1) + 1;
//}
//
//int main()
//{
//	char str[10] = "abcdef";
//	int len = myStrlen(str);
//	printf("len = %d\n", len);
//
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		int temp = b;
//		b = a + b;
//		a = temp;
//	}
//
//	return b;
//}
//
//int main()
//{
//	int n = 40;
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", a, c);
//		return;
//	}
//
//	hanoi(n - 1, a, c, b);
//	printf("%c->%c\n", a, c);
//	hanoi(n - 1, b, a, c);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(3, 'a', 'b', 'c');
//	return 0;
//}


//打印一个数的每一位
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//		printf("%d ", x % 10);
//	}
//	else
//	{
//		printf("%d ", x);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//递归阶乘
//int fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//
//	return x * fac(x - 1);
//}

//迭代递归
//int fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//非递归strlen
//int myStrlen(char* str)
//{
//	int count = 0;
//	while (str[count] != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//递归strlen
//int myStrlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	return myStrlen(str + 1) + 1;
//}

//int main()
//{
//	char str[] = "abcdef";
//	int len = myStrlen(str);
//	printf("len = %d\n", len);
//	return 0;
//}


//int myStrlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	return myStrlen(str + 1) + 1;
//}
//
//void reverse_string(char* string)
//{
//	int len = myStrlen(string);
//	if (len <= 1)
//	{
//		return;
//	}
//	
//	char temp = string[0];
//	string[0] = string[len - 1];
//	string[len - 1] = '\0';
//	reverse_string(string + 1);
//	string[len - 1] = temp;
//
//}
//
//int main()
//{
//	char str[] = "abcdef";
//
//	printf("逆序前：%s\n", str);
//	reverse_string(str);
//	printf("逆序后：%s\n", str);
//
//	return 0;
//}


//unsigned int DigitSum(unsigned int x)
//{
//	if (x < 10)
//	{
//		return x;
//	}
//
//	return DigitSum(x / 10) + x % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//n的k次方
//int myPow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//
//	return n * myPow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = myPow(n, k);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//递归fib
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	return fib(n - 1) + fib(n - 2);
//}

//非递归fib
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		int temp = b;
//		b = a + b;
//		a = temp;
//	}
//
//	return b;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
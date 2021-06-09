#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//三角形数量
//int main()
//{
//	int n;
//	int ret[100] = { 0 };
//	int num = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		n = n - 3;
//		sum = sum + n;
//		while (n > 2)
//		{
//			n = n - 2;
//			sum += n;
//		}
//		ret[num++] = sum;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d\n", ret[i]);
//	}
//	return 0;
//}

//int main()
//{         //00001010
//	int a = 10;//向内存申请4个字节的空间，存放10;S
//	//printf("%p\n", &a);
//	char* pa = &a;     
//	printf("%d\n", *pa);
//	//sizeof(int) - 4byte
//	return 0;
//}


//声明一个学生类型
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[12];
//};
//
//struct Book
//{
//	char name[20];
//	int price;
//	char author[20];
//};

//int main()
//{
//	//创建结构体变量并初始化
//	struct Stu s1 = { "张三",20,"男","20130227" };
//	struct Stu s2 = { "李四",30,"女","20130222" };
//	struct Stu s3;
//	struct Book b1 = { "C语言程序设计",55,"谭浩强" };
//
//	printf("名字: %s 年龄: %d 性别: %s 学号: %s\n", s1.name, s1.age, s1.sex, s1.id);
//	//访问结构体 = 结构体变量.成员名
//	//-> - 访问结构体 = 结构体指针->成员名
//	struct Book* pb = &b1;
//	printf("%s %d %s\n", pb->author, pb->price, pb->name);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\181"));
//	return 0;
//}

//leetcode - 9
//int getDigit(int x)
//{
//    int digit = 0;
//    while (x)
//    {
//        digit++;
//        x /= 10;
//    }
//    return digit;
//}
//
//bool isPalindrome(int x) {
//    int rev = 0;
//    if (x < 0)
//    {
//        return false;
//    }
//    else if (x == 0)
//    {
//        return true;
//    }
//    else
//    {
//        int digit = getDigit(x);
//        if (digit % 2 == 0)
//        {
//            //偶数
//            //reverse
//            for (int i = 0; i < digit / 2; i++)
//            {
//                rev = rev * 10 + x % 10;
//                x /= 10;
//            }
//        }
//        else
//        {
//            //奇数
//            for (int i = 0; i < digit / 2; i++)
//            {
//                rev = rev * 10 + x % 10;
//                x /= 10;
//            }
//            x /= 10;
//        }
//    }
//    if (x == rev)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

//leetcode - 7
//int reverse(int x) {
//int rev = 0;
//while (x != 0)
//{
//    if (rev < INT_MIN / 10 || rev > INT_MAX / 10)
//    {
//        return 0;
//    }
//    // int dig = x%10;
//    rev = rev * 10 + x % 10;
//    x /= 10;
//}
//return rev;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//判断是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int cnt = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//		if (cnt % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//switch语句
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("星期一\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("星期二\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("星期三\n");
//	//}
//	//...
//	
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//leetcode - 852
//int peakIndexInMountainArray(int* arr, int arrSize) {
//    //遍历数组 - O(n)
//    // int max = 0;
//    // int size = 0;
//    // for(int i = 0;i < arrSize;i++)
//    // {
//    //     if(arr[i] > max) 
//    //     {
//    //         max = arr[i];
//    //         size = i;
//    //     }
//    // }
//    // return size;
//
//    //二分查找
//    // int left = 1;
//    // int right = arrSize - 2;
//    // while(left < right)
//    // {
//    //     int mid =  (right + left) >> 1;
//    //     if(arr[mid] > arr[mid+1])
//    //     {
//    //         right = mid;
//    //     }
//    //     else
//    //     {
//    //         left = mid + 1;
//    //     }
//    // }
//    // return right;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//continue 的作用是跳过本次循环后边的代码，直接到while循环的判断部分
//	//输出1234后死循环
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>");
//	scanf("%s", password);//读到一个空格为止
//	//getchar();
//	while ((ch = getchar()) != '\n') //把所有字符都从缓冲区拿走直到拿走第一个回车 - 做完以后缓冲区理论上就没有字符了
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N)>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	printf("%s\n", password);
//	//EOF - end of file - 文件结束标志
//	//getchar读取失败的时候会返回EOF
//	//1.返回的字符，本质是字符也是ASCII码值，是整数
//	//2.getchar函数不仅仅是返回正常字符，还会返回EOF，是-1，所以放在整型变量中
//	return 0;
//}

//int main(void)
//{
//	int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	int temp = 0;
//	if (y > x)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (z > y)
//	{
//		temp = y;
//		y = z;
//		z = temp;
//	}
//	if (y > x)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	printf("%d %d %d", x, y, z);
//	return 0;
//}

//int main(void)
//{
//	int i = 3;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//辗转相除
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	if (x < y)
//	{
//		int temp = x;
//		x = y;
//		y = temp;
//	}
//	while (x % y != 0)
//	{
//		int r = x % y;
//		x = y;
//		y = r;
//	}
//	printf("%d\n", y);
//	return 0;
//}

//int main(void)
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 100 == 0) && (i % 400 != 0))
//		{
//			continue;
//		}
//		if (i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int isPrime(int x)
//{
//	int flag = 1;
//	if (x <= 1)
//	{
//		flag = 0;
//	}
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 0;
//		}
//	}
//	return flag;
//}
//
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}
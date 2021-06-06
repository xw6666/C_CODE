#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//reversePrint
//void print()
//{
//	char a;
//	scanf("%c", &a);
//	if (a != '#')
//	{
//		print(a);
//	}
//	if(a=='#')
//	{
//		return;
//	}
//	printf("%c", a);
//}
//int main()
//{
//	print();
//	return 0;
//}

//二分查找

//迭代

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int low = 0;
//	int middle = 4;
//	int high = 9;
//	int target = 0;
//	scanf("%d", &target);
//	if (target < 0 || target>9)
//	{
//		exit(-1);
//	}
//	while (arr[middle] != target)
//	{
//		if (target > arr[middle])
//		{
//			low = middle;
//			middle = (low + high) / 2;
//		}
//		else
//		{
//			high = middle;
//			middle = (low + high) / 2;
//		}
//	}
//
//	printf("%d", middle);
//	return 0;
//}


//递归

//int low = 0;
//int middle = 4;
//int high = 9;
int search(int* arr, int target, int low,int middle,int high)
{
	if (arr[middle] == target)
	{
		return middle;
	}
	else if (arr[middle] > target)
	{
		search(arr, target, low, (low + high) / 2, middle-1);
	}
	else
	{
		search(arr, target, middle+1, (low + high) / 2, high);
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,10,11,17 };
	int low = 0;
	int middle = 4;
	int high = 9;
	int target = 0;
	scanf("%d", &target);
	int ret = search(arr, target, low, middle, high);
	printf("%d\n", ret);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int k = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (nums[i] % 2 == 1)
//		{
//			//ÆæÊý
//			int temp = nums[k];
//			nums[k] = nums[i];
//			nums[i] = temp;
//			k++;
//		}
//	}
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		nums[i] = 0;
//		printf("Hello world!\n");
//	}
//
//	return 0;
//}

void my_strcpy(char* des,const char* src)
{
	assert(des != NULL);
	assert(src != NULL);
	while (*des++ = *src++)
	{
		;
	}
}

int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}

	return my_strlen(str + 1) + 1;
}

int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abv";
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
}
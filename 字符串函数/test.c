#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* myMemcpy(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;

	for (int i = 0; i < count; i++)
	{
		*((char*)dest + i) = *((char*)src + i);
	}
}

void* myMemmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	if (src > dest)
	{
		//向前拷贝 - 从前拷贝
		for (int i = 0; i < count; i++)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
	}
	else
	{
		//向后拷贝 - 从后拷贝
		for (int i = count - 1; i >= 0; i--)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
	}

	return dest;
}


char* myStrcpy(char* strDestination, const char* strSource)
{
	assert(strDestination && strSource);
	char* ret = strDestination;
	while (*strDestination++ = *strSource++)
	{
		;
	}

	return ret;
}


void printNums(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", *(nums + i));
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };

	//memcpy(str1 + 2, str1, 4);  
	myMemcpy(arr1 + 2, arr1, sizeof(int) * 4);
	myMemmove(arr2 + 2, arr2, sizeof(int) * 4);

	//printf("%s\n", str1);
	//printf("%s\n", str2);
	printNums(arr1, sizeof(arr1) / sizeof(arr1[0]));
	printNums(arr2, sizeof(arr2) / sizeof(arr2[0]));

	return 0;
}

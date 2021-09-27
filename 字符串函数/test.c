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
		//��ǰ���� - ��ǰ����
		for (int i = 0; i < count; i++)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
	}
	else
	{
		//��󿽱� - �Ӻ󿽱�
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

char* myStrstr(const char* string, const char* strCharSet)
{
	char* ret = NULL;

	const char* begin = string;  //��ʼƥ���λ��
	while (*begin != '\0')
	{
		const char* i = begin;   //����ÿһ��ƥ�����
		const char* j = strCharSet;   //�Ӵ�ÿһ��ƥ�����
		while (*i != '\0' && *j != '\0' && *i == *j)
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			//ƥ��ɹ�
			//��¼����ƥ�����
			ret = begin;
			break;
		}
		else
		{
			//ƥ��ʧ��
			begin++;   //��һ����ʼƥ���λ��
		}
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

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//
//	//memcpy(str1 + 2, str1, 4);  
//	myMemcpy(arr1 + 2, arr1, sizeof(int) * 4);
//	myMemmove(arr2 + 2, arr2, sizeof(int) * 4);
//
//	//printf("%s\n", str1);
//	//printf("%s\n", str2);
//	printNums(arr1, sizeof(arr1) / sizeof(arr1[0]));
//	printNums(arr2, sizeof(arr2) / sizeof(arr2[0]));
//
//	return 0;
//}


char* myStrcat(char* strDestination, const char* strSource)
{
	assert(strDestination && strSource);
	//�ƶ���strDestination��ĩβ
	char* str = strDestination;
	while (*str != '\0')
	{
		str++;
	}
	//*str == '\0'
	while (*str++ = *strSource++)
	{
		;
	}

	return strDestination;
}


//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "cdeft";
//
//	char* ret = myStrstr(str1, str2);
//	if (ret != NULL)
//	{
//		printf("ƥ��ɹ���%s\n", ret);
//	}
//	else
//	{
//		printf("û���ҵ�");
//	}
//	return 0;
//}

int myStrcmp(const char* string1, const char* string2)
{
	assert(string1, string2);
	
	while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2)
	{
		string1++;
		string2++;
	}

	if (*string1 == '\0' && *string2 == '\0')
	{
		//���
		return 0;
	}
	else
	{
		return *string1 - *string2;
	}

}

size_t myStrlen(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(str + 1);
	}
}


//int main()
//{
//	char str1[20] = "abcdfe";
//	char str2[] = "abcdf";
//	//char* ret = myStrcat(str1, str2);
//	//
//	//printf("%s\n", ret);
//
//	int ret = myStrcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("s1 > s2");
//	}
//	else if (ret < 0)
//	{
//		printf("s1 < s2");
//	}
//	else
//	{
//		printf("s1 == s2");
//	}
//
//	return 0;
//}

int main()
{
	char str[] = "abcdef";
	int len = myStrlen(str);
	
	printf("%d\n", len);

	return 0;
}
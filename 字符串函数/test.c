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
	

}


int main()
{
	char str1[] = "123456789";
	char str2[] = "123456789";

	memcpy(str1 + 2, str1, 4);  
	//myMemcpy(str1 + 2, str1, 4);
	memmove(str2 + 2, str2, 4);

	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
}
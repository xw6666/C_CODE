#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int k = 0;
	for (int i = 0; i < sz; i++)
	{
		if (nums[i] % 2 == 1)
		{
			//ÆæÊý
			int temp = nums[k];
			nums[k] = nums[i];
			nums[i] = temp;
			k++;
		}
	}

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}
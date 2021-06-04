/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int *singleNumbers(int *nums, int numsSize, int *returnSize)
{
    int tmp1 = 0;
    int tmp2 = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        tmp1 = tmp1 ^ nums[i];
    }
    //tmp1现在就是两个目标数的异或结果
    int digit = 1; //假设第一位就是1
    //如果右移k位不是1，k从0开始，则位数加一，这样去找到位1的二进制位数
    while (((tmp1 >> (digit - 1)) & 1) == 0)
    {
        digit++;
    }
    //查找k为为1的并异或
    //初始化tmp1和tmp2为0准备用来得到两个target
    tmp1 = 0;
    tmp2 = 0;
    //对原数组中的数分类并且做异或 处理
    for (i = 0; i < numsSize; i++)
    {
        // digit的值代表第k位为1,所以要左移digit-1位去判断
        if (((nums[i] >> (digit - 1)) & 1) == 1)
        {
            tmp1 = tmp1 ^ nums[i];
        }
        else
        {
            tmp2 = tmp2 ^ nums[i];
        }
    }

    // 返回结果
    *returnSize = 2;
    int *space = (int *)malloc(2 * sizeof(int));
    space[0] = tmp1;
    space[1] = tmp2;
    return space;
}

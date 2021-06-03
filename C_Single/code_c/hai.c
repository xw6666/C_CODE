// #include <stdio.h>
// #include <string.h>
// int isHuiwen(char *begin, char *end)
// {
//     char arr1[100] = {0};
//     char arr2[100] = {0};
//     int i = 0;
//     char *p = NULL;
//     for (p = begin; p <= end; p++, i++)
//     {
//         arr1[i] = *p;
//     }
//     i = 0;
//     p--;
//     for (p = p; p >= begin; p--, i++)
//     {
//         arr2[i] = *p;
//     }
//     for (i = 0; i < strlen(arr1); i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     char arr[100] = {0};
//     char arr1[100][100];
//     int k = 0;
//     int l = 0;
//     scanf("%s", arr);
//     int ret = 0;
//     int max = 0;
//     int i = 0;
//     for (i = 0; i < strlen(arr); i++)
//     {

//         int j = 0;
//         for (j = i + 1; j < strlen(arr); j++)
//         {
//             if (isHuiwen(&arr[i], &arr[j]))
//             {
//                 if (j > max)
//                 {
//                     ret = j;
//                     max = j;
//                 }
//             }
//         }
//         j = i;
//         if (j < ret)
//         {
//             for (j = i; j <= ret; j++)
//             {
//                 arr1[k][l] = arr[j];
//                 l++;
//             }
//             l = 0;
//             k++;
//         }
//     }
//     // //     // int j = 0;
//     // //     // for (j = 1; i < strlen(arr); i++)
//     // //     // {
//     // //     //     if (isHuiwen(arr, &arr[i]))
//     // //     //     {
//     // //     //         if (i + 1 > max)
//     // //     //         {
//     // //     //             ret = i + 1;
//     // //     //             max = i + 1;
//     // //     //         }
//     // //     //     }
//     // //     // }

//     // //     // for (i = 0; i < ret; i++)
//     // //     // {
//     // //     //     printf("%c", arr[i]);
//     // //     // }
//     char *pmax = arr1;
//     for(i=0;i<30;i++)
//     {
//         if(strlen(arr1+i)>strlen(pmax))
//         {
//             pmax = arr1+i;
//         }
//     }

//         printf("%s",pmax);

//     return 0;
// }
// #include <stdio.h>
// #define MAX 100000000 //如果不能拼出所求硬币，则赋值为此数
// int coinChange(int *coins, int coinsSize, int amount)
// {
//     const int M = amount + 1;
//     int N = coinsSize; //定义一个硬币数组的长度
//     int dp[M];

//     dp[0] = 0;
//     int i;
//     for (i = 1; i <= M - 1; ++i)
//     {
//         dp[i] = MAX;

//         int j = 0;
//         for (j= 0; j < N; ++j)
//         {
//             if (i >= coins[j] && dp[i - coins[j]] != MAX && dp[i - coins[j]] + 1 < dp[i])
//             {

//                 dp[i] = dp[i - coins[j]] + 1;
//             }
//         }
//     }
//     if (dp[amount] == MAX)
//     {
//         return -1;
//     }
//     else
//     {
//         return dp[amount];
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int coins[100];
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &coins[i]);
//     }
//     int amount;
//     scanf("%d", &amount);
//     int ret = coinChange(coins, n, amount);
//     printf("%d", ret);
//     return 0;
// }

#include <stdio.h>
int missingNumber(int* nums, int numsSize){
    int arr[1000] = {0};
    int i = 0;
    for(i = 0;i < numsSize;i++)
    {
        //读入数字进数组
        arr[i] = i;
    }

    //做异或
    for(i = 0;i<numsSize;i++)
    {
        arr[*(nums+i)] = nums[i]^arr[*(nums+i)];
    }

    // 遍历寻找非0数，返回下标
    for(i = 0;i<numsSize;i++)
    {
        if(arr[i] != 0)
        {
            break;
        }
    }

    if(numsSize == 1&&nums[0] == 1)
    {
        return 0;
    }
    else
    {
        return i;
    }
}
int main()
{
    int nums[] = {1,2};
    int ret = missingNumber(nums,2);
    printf("%d\n",ret);
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 276.����Ϳɫ
//int numWays(int n, int k) {
//    if (n <= 1)
//    {
//        return k;
//    }
//    int dp[n];   //dp�����ʾ��0��i�ŵ����˹���dp[i]��Ϳɫ����
//    dp[0] = k;
//    dp[1] = dp[0] * k;
//    for (int i = 2; i < n; i++)
//    {
//        dp[i] = (dp[i - 1] + dp[i - 2]) * (k - 1);
//    }
//
//    return dp[n - 1];
//    return 0;
//}

//leetcode - 198.��ҽ���

//int rob(int* nums, int numsSize) {
//    if (numsSize == 1)
//    {
//        return nums[0];
//    }
//
//    int dp[numsSize];
//    dp[0] = nums[0];
//    // printf("%d ",dp[0]);
//    if (nums[1] > dp[0])
//    {
//        dp[1] = nums[1];
//    }
//    else
//    {
//        dp[1] = dp[0];
//    }
//    // printf("%d ",dp[1]);
//    for (int i = 2; i < numsSize; i++)
//    {
//        dp[i] = fmax(dp[i - 2] + nums[i], dp[i - 1]);
//        // printf("%d ",dp[i]);
//    }
//
//    return dp[numsSize - 1];
//}

//leetcode - 53.��������
int maxSubArray(int* nums, int numsSize) {
    if (numsSize == 1)
    {
        return nums[0];
    }

    int dp[numsSize];    //dp�����ʾ���±�Ϊi����������������Ϊdp[i];
    dp[0] = nums[0];
    int max = dp[0];
    //dp[i] = max(dp[i - 1], nums[i])
    for (int i = 1; i < numsSize; i++)
    {
        dp[i] = fmax(dp[i - 1] + nums[i], nums[i]);
        // printf("%d ", dp[i]);
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }

    return max;
}
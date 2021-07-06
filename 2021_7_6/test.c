#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//leetcode��ϰ - 977. ���������ƽ��
//˫ָ��


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* sortedSquares(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = nums[i] * nums[i];
//    }
//
//    *returnSize = numsSize;
//    int* ans = (int*)malloc(numsSize * sizeof(int));
//    int left = 0;
//    int right = numsSize - 1;
//    i = numsSize - 1;
//    while (left < right)
//    {
//        if (nums[left] < nums[right])
//        {
//            ans[i--] = nums[right--];
//        }
//        else
//        {
//            ans[i--] = nums[left++];
//        }
//    }
//    ans[i] = nums[left];
//    return ans;
//}

//leetcode - 209. ������С��������
//int minSubArrayLen(int target, int* nums, int numsSize) {
//    //�����ƽ�
//    int i = 0;
//    int j = 0;
//    int min = INT_MAX;//��ʼ����С���������鳤��
//    for (i = 0; i < numsSize; i++)
//    {
//        int sum = 0;//��¼һ�������к�
//        for (j = i; j < numsSize; j++)
//        {
//            sum = sum + nums[j];
//            if ((sum >= target) && (j - i + 1 < min))
//            {
//                min = j - i + 1;
//            }
//        }
//    }
//    if (min == INT_MAX)
//    {
//        return 0;
//    }
//    return min;
//}
//int minSubArrayLen(int target, int* nums, int numsSize) {
//    //��������
//    int left = 0;
//    int right = left;
//    int min = INT_MAX;
//    int sum = nums[0];
//    while ((right < numsSize) && (left <= right))
//    {
//        if (sum >= target)
//        {
//            if (right - left + 1 < min)
//            {
//                min = right - left + 1;
//            }
//            // left++;
//            sum = sum - nums[left];
//            left++;
//        }
//        else
//        {
//            right++;
//            if (right < numsSize)
//            {
//                sum = sum + nums[right];
//            }
//        }
//    }
//    if (min == INT_MAX)
//    {
//        return 0;
//    }
//    return min;
//}

//leetcode - 36. ��Ч������
//bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
//    int nums[10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //�����
//    for (i = 0; i < 9; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            nums[j] = 0;
//        }
//        for (j = 0; j < 9; j++)
//        {
//            if (board[i][j] != '.')
//            {
//                int ret = board[i][j] - '0';
//                // printf("%d ",ret);
//                nums[ret]++;
//            }
//        }
//        for (j = 1; j <= 9; j++)
//        {
//            // printf("%d ",nums[i]);
//            if (nums[j] > 1)
//            {
//                return false;
//            }
//        }
//    }
//    //�����
//    for (j = 0; j < 9; j++)
//    {
//        for (i = 0; i < 10; i++)
//        {
//            nums[i] = 0;
//        }
//        for (i = 0; i < 9; i++)
//        {
//            if (board[i][j] != '.')
//            {
//                int ret = board[i][j] - '0';
//                // printf("%d ",ret);
//                nums[ret]++;
//            }
//        }
//        for (i = 1; i <= 9; i++)
//        {
//            // printf("%d ",nums[i]);
//            if (nums[i] > 1)
//            {
//                return false;
//            }
//        }
//    }
//
//    //����
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            int a = 0;
//            int b = 0;
//            for (a = 0; a < 10; a++)
//            {
//                nums[a] = 0;
//            }
//            for (a = i * 3; a < (i + 1) * 3; a++)
//            {
//                for (b = j * 3; b < (j + 1) * 3; b++)
//                {
//                    if (board[a][b] != '.')
//                    {
//                        int ret = board[a][b] - '0';
//                        // printf("%d ",ret);
//                        nums[ret]++;
//                    }
//                    // int ret = board[a][b] - '0';
//                    // printf("%d ",ret);
//                    // nums[ret]++;
//                }
//            }
//            for (a = 1; a <= 9; a++)
//            {
//                if (nums[a] > 1)
//                {
//                    return false;
//                }
//            }
//
//        }
//    }
//
//    return true;
//}

//leetcode - 904. ˮ������
//int totalFruit(int* fruits, int fruitsSize) {
//    if (fruitsSize <= 2)
//    {
//        return fruitsSize;
//    }
//    int a = -1;
//    int b = -2;
//    int i = 0;
//    int j = 0;
//    a = fruits[i];
//    b = fruits[i + 1];
//    int ret = 2;
//    for (j = 2; j < fruitsSize; j++)
//    {
//        //���a��b��ȣ�j��������ζ���ժ
//        if (a == b)
//        {
//            if (fruits[j] != a)
//            {
//                a = fruits[j];
//                if ((j - i + 1) > ret)
//                {
//                    ret = j - i + 1;
//                }
//            }
//            else
//            {
//                if (j - i + 1 > ret)
//                {
//                    ret = j - i + 1;
//                }
//            }
//        }
//        else
//        {
//            //�ж�j���Ƿ���a����bˮ��
//            //�ǵĻ�˵������ժ
//            //���ǵĻ�˵�������˵�����ˮ��
//            if (fruits[j] == a || fruits[j] == b)
//            {
//                if (j - i + 1 > ret)
//                {
//                    ret = j - i + 1;
//                }
//            }
//            else
//            {
//                a = fruits[j];
//                b = fruits[j - 1];
//                int temp = j - 1;
//                while (fruits[temp] == fruits[j - 1])
//                {
//                    temp--;
//                }
//                i = temp + 1;
//                if (j - i + 1 > ret)
//                {
//                    ret = j - i + 1;
//                }
//            }
//        }
//    }
//
//    return ret;
//}

//leetcode - 76. ��С�����Ӵ�(δ���)
//
//char* minWindow(char* s, char* t) {
//    int tlen = strlen(t);//ά��һ���ֵ�ֵ��ȷ��s����Ŀ���Ӵ�
//    int need[128] = { 0 };
//    int i = 0;
//    for (i = 0; i < tlen; i++)
//    {
//        need[t[i]] = need[t[i]] + 1;
//    }
//    // for(i = 0;i < 128;i++)
//    // {
//    //     printf("%d ",need[i]);
//    // }
//    int minLen = INT_MAX;
//    char* ret = (char*)malloc((strlen(s) + 1) * sizeof(char));
//    int left = 0;
//    int right = 0;
//    for (right = 0; right < strlen(s); right++)
//    {
//        need[s[right]] = need[s[right]] - 1;//ÿ�ν�����Ҫ���һ��Ԫ��
//        for (i = 0; i < 128; i++)
//        {
//            if (need[i] > 0)
//            {
//                //˵��û��Ŀ��
//                // printf("1 ");
//                break;
//            }
//            // printf("%d ",need[i]);
//        }
//        // printf("\n");
//
//        if (i == 128)
//        {
//            if (right - left + 1 < minLen)
//            {
//
//                //������p
//                minLen = right - left + 1;
//                char* p = ret;
//                int temp = left;
//                int j = 0;
//                for (temp = temp; temp <= right; temp++)
//                {
//                    p[j] = s[temp];
//                    j++;
//                }
//                p[j] = '\0';
//
//            }
//            //left���� - ��������ȥ��һ��Ԫ�أ�need��Ӧ++
//            //һֱ������need���������д���0������ʱ��
//            int needcnt = -1;
//            while (needcnt <= 0)
//            {
//                //����
//                need[left]++;
//                left++;
//                for (int j = 0; j < 128; j++)
//                {
//                    if (need[j] > needcnt)
//                    {
//                        needcnt = need[j];
//                    }
//                }
//                // printf("%d ",needcnt);
//            }
//        }
//    }
//
//
//    return ret;
//}
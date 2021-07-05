#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 35. 搜索插入位置

//int searchInsert(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int mid = left + ((right - left) >> 1);
//        if (target > nums[mid])
//        {
//            left = mid + 1;
//        }
//        else if (target < nums[mid])
//        {
//            right = mid;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//
//    if (target > nums[right])
//    {
//        return right + 1;
//    }
//    return right;
//}

//leetcode - 34. 在排序数组中查找元素的第一个和最后一个位置
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
//    //(]二分
//    //找到以后循环计数
//    *returnSize = 2;
//    int* ret = (int*)malloc(2 * sizeof(int));
//    if (numsSize == 1 && target == nums[0])
//    {
//        ret[0] = 0;
//        ret[1] = 0;
//        return ret;
//    }
//    int left = -1;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int mid = left + ((right - left + 1) >> 1);
//        if (target > nums[mid])
//        {
//            left = mid;
//        }
//        else if (target < nums[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            int temp = mid;
//            //左边找一遍，右边找一遍
//            while ((temp >= 0) && (nums[temp] == target))
//            {
//                temp--;
//            }
//            ret[0] = temp + 1;
//            temp = mid;
//            while ((temp <= numsSize - 1) && (nums[temp] == target))
//            {
//                temp++;
//            }
//            ret[1] = temp - 1;
//            return ret;
//        }
//    }
//    //没找到
//    ret[0] = -1;
//    ret[1] = -1;
//    return ret;
//}

//leetcode - 69. x 的平方根
//int mySqrt(int x) {
//    if (x < 2)
//    {
//        return x;
//    }
//    int left = 0;
//    int right = x;
//    while (left < right)
//    {
//        int mid = left + ((right - left) >> 1);
//        if ((double)mid * (double)mid > x)
//        {
//            right = mid;
//        }
//        else if ((double)mid * (double)mid < x)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//
//    if ((double)right * right > x)
//    {
//        return right - 1;
//    }
//    return right;
//}

//leetcode - 367. 有效的完全平方数
//bool isPerfectSquare(int num) {
//    unsigned long long a = sqrt(num);
//    if (a * a == num)
//    {
//        return true;
//    }
//
//    return false;
//}
//bool isPerfectSquare(int num) {
//    if (num < 2)
//    {
//        return true;
//    }
//    unsigned long long left = 0;
//    unsigned long long right = num;
//
//    while (left < right)
//    {
//        unsigned long long mid = left + ((right - left) >> 1);
//        if ((double)mid * mid > num)
//        {
//            right = mid;
//        }
//        else if ((double)mid * mid < num)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return true;
//        }
//    }
//
//    return false;
//}

//leetcode - 441. 排列硬币
//int arrangeCoins(int n) {
//    if (n < 1)
//    {
//        return 0;
//    }
//    int cnt = 0;
//    int i = 1;
//
//    while (n > 0)
//    {
//        n = n - i;
//        i++;
//        cnt++;
//    }
//    if (0 == n)
//    {
//        return cnt;
//    }
//    return cnt - 1;
//}

//double size(double x)
//{
//    return (x * (1 + x) / 2);
//}
//
//int arrangeCoins(int n) {
//    if (n <= 1)
//    {
//        return n;
//    }
//    int left = 0;
//    int right = n;
//    while (left < right)
//    {
//        int mid = left + ((right - left) >> 1);
//        if (size(mid) > n)
//        {
//            // printf("%d ",size(mid));
//            right = mid;
//        }
//        else if (size(mid) < n)
//        {
//            // printf("%d ",size(mid));
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//
//    return left - 1;
//}

//leetcode - 27. 移除元素
//快慢指针


//int removeElement(int* nums, int numsSize, int val) {
//    int slow = 0;
//    for (int fast = 0; fast < numsSize; fast++)
//    {
//        if (nums[fast] != val)
//        {
//            nums[slow] = nums[fast];
//            slow++;
//        }
//    }
//    return slow;
//}

//leetcode - 283. 移动零
//void moveZeroes(int* nums, int numsSize) {
//    int slow = 0;
//    int fast = 0;
//    for (fast = 0; fast < numsSize; fast++)
//    {
//        if (nums[fast] != 0)
//        {
//            nums[slow] = nums[fast];
//            slow++;
//        }
//    }
//    // 从slow开始接0
//    while (slow < numsSize)
//    {
//        nums[slow++] = 0;
//    }
//}

//leetcode - 844. 比较含退格的字符串
//bool backspaceCompare(char* s, char* t) {
//    int slow = 0;
//    int fast = 0;
//    int slen = strlen(s);
//    int tlen = strlen(t);
//    for (fast = 0; fast < slen; fast++)
//    {
//        if (s[fast] == '#')
//        {
//            if (slow > 0)
//            {
//                slow--;
//            }
//        }
//        else
//        {
//            s[slow++] = s[fast];
//        }
//    }
//    s[slow] = '\0';
//
//    slow = 0;
//    for (fast = 0; fast < tlen; fast++)
//    {
//        if (t[fast] == '#')
//        {
//            if (slow > 0)
//            {
//                slow--;
//            }
//        }
//        else
//        {
//            t[slow++] = t[fast];
//        }
//    }
//    t[slow] = '\0';
//    int ret = strcmp(s, t);
//    if (0 == ret)
//    {
//        return true;
//    }
//    return false;
//}

//leetcode - 977. 有序数组的平方
//暴力 - 调用快排
//int CmpByInt(const void* e1, const void* e2)
//{
//    return (*((int*)e1) - *((int*)e2));
//}
//int* sortedSquares(int* nums, int numsSize, int* returnSize) {
//    *returnSize = numsSize;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = nums[i] * nums[i];
//    }
//    qsort(nums, numsSize, sizeof(int), CmpByInt);
//    return nums;
//}
//双指针
//int* sortedSquares(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = nums[i] * nums[i];
//    }
//    int* ans = (int*)malloc(numsSize * sizeof(int));
//    *returnSize = numsSize;
//    int left = 0;
//    int right = numsSize - 1;
//    i = numsSize - 1;
//    while (left < right)
//    {
//        if (nums[left] > nums[right])
//        {
//            ans[i--] = nums[left];
//            left++;
//            // ans[i--] = nums[right];
//            // printf("%d ",ans[i - 1]);
//            // right--;
//        }
//        else
//        {
//            ans[i--] = nums[right];
//            right--;
//            // printf("%d ",ans[i - 1]);
//            // ans[i--] = nums[left];
//            // left++;
//        }
//    }
//
//    ans[i] = nums[right];
//
//    // ans[i] = nums[right];
//    return ans;
//}
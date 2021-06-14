#define _CRT_SECURE_NO_WARNINGS 1

//leetcode 374
//int guessNumber(int n) {
//    int left = 1;
//    int right = n;
//    while (left < right)
//    {
//        int mid = left + (right - left) / 2;
//        int ret = guess(mid);
//        if (ret == -1)
//        {
//            right = mid - 1;
//        }
//        else if (ret == 1)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return right;
//}


//leetcode - 11


int Min(int x, int y)
{
    return (x < y ? x : y);
}

int maxArea(int* height, int heightSize) {
    //假设最开始是0
    int max = 0;
    

    //首先想到暴力方法 - 结果跑不过
    // for(int i = 0;i < heightSize;i++)
    // {
    //     for(int j = i + 1;j < heightSize;j++)
    //     {
    //         if(height[j] >= height[i])
    //         {
    //             int ret = (j - i) * height[i];
    //             if(max < ret)
    //             {
    //                 max = ret;
    //             }
    //         }
    //         if(height[j] < height[i])
    //         {
    //             int ret = (j - i) * height[j];
    //             if(max < ret)
    //             {
    //                 max = ret;
    //             }
    //         }
    //     }
    // }

    //之后是双指针 - 但是还是没想完备
    // for(int i = 0;i < heightSize;i++)
    // {
    //     int left = 0;
    //     int right = heightSize - 1;
    //     int leftMax = 0;
    //     int rightMax = 0;
    //     while(left < i)
    //     {
    //         if(height[left] >= height[i])
    //         {
    //             leftMax = (i - left) * height[i];
    //             break;
    //         }
    //         left++;
    //     }
    //     while(right > i)
    //     {
    //         if(height[right] >= height[i])
    //         {
    //             rightMax = (right - i) * height[i];
    //             break;
    //         }
    //         right--;
    //     }
    //     if(max < (leftMax + rightMax))
    //     {
    //         max = leftMax +rightMax;
    //     }
    // }
    // return max;

    //最优解
    int left = 0;
    int right = heightSize - 1;
    while (left < right)
    {
        int min = Min(height[left], height[right]);
        int ret = min * (right - left);
        if (max < ret)
        {
            max = ret;
        }
        if (min == height[left])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max;
}
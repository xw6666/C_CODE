#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//leecode - 55. ��Ծ��Ϸ
//bool canJump(int* nums, int numsSize) {
//    int max = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        // max = i + nums[i];
//        // printf("%d ", max);
//        if (i > max)
//        {
//            return false;;
//        }
//        if (i + nums[i] > max)
//        {
//            max = i + nums[i];
//        }
//        // printf("%d ",max);
//    }
//    return true;
//}

//�����


//����������ɳ�ʼ����ϰ��
//int main()
//{
//	//��1������һ��������@��β 
//	char a[100] = { 0 };//�ַ�������
//	int i = 0;
//	int n = 0;
//	//for (i = 0; a[i] != '@'; i++)
//	//{
//	//	scanf("%c", &a[i]);
//	//}
//	while (scanf("%c", &a[i]), a[i] != '@')
//	{
//		i++;
//		n++;     //��Ȼ����ַ�������
//	}
//	//n = strlen(a); //strlen��������'\0'Ϊ��־�����ﲻ����
//	//printf("%d", n);
//	//��2�� �жϳ�������������ż�� 
//	//int result, j;
//	//if (n % 2 == 0)//ż����ʱ�� 
//	//{
//	//	for (i = 0; i < n / 2; i++)//abba,n=4,a[0]~a[3],�ж�a[0]a[3],a[1]a[2]�Ƿ���ͬ 
//	//	{
//	//		for (j = n - 1; j >= n / 2; j--)
//	//		{
//	//			if (a[i] != a[j])
//	//			{
//	//				printf("fault");
//	//				break;
//	//			}
//	//		}
//	//	}
//	//	printf("true");
//	//}
//	//else//aba,n=3,a[0],a[1],a[2],�ж�a[0]a[2]�Ƿ���ͬ 
//	//{
//	//	for (i = 0; i < (n - 1) / 2; i++)
//	//	{
//	//		for (j = n - 1; j >= (n + 1) / 2; j--)
//	//		{
//	//			if (a[i] != a[j])
//	//			{
//	//				printf("fault");
//	//				break;
//	//			}
//	//		}
//	//	}
//	//	printf("true");
//	//}
//
//
//	//ͨ������ָ�룬һ��ָ���ַ�������ߣ�һ��ָ�����ұ�
//	//ͨ��ѭ���Ա�
//	//����ַ���ȣ����������1���ұ�������1
//	//һֱ����ߴ��ڵ����ұߵ�ʱ��ֹͣ�Ա� ����;�ԱȲ���һ��������
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		if (a[left] == a[right])
//		{
//			left++;
//			right--;
//		}
//		else
//		{
//			//�϶����ǻ���
//			break;
//		}
//	}
//	if (left < right)
//	{
//		//˵��ѭ������ֹͣ�����ǻ���
//		printf("false\n");
//	}
//	else
//	{
//		printf("true\n");
//	}
//	return 0;
//}


//leetcode - 45. ��Ծ��Ϸ II
//int jump(int* nums, int numsSize) {
//    int dp[numsSize];  //dp�����ʾ������i�����ٲ�����dp[i]
//
//    //��ʼ��dp
//    dp[0] = 0;  //0��λ��Ȼ������
//    for (int i = 1; i < numsSize; i++)
//    {
//        //�ҳ�����i�����ٲ�
//        int min = INT_MAX;
//        for (int j = 0; j < i; j++)
//        {
//            // int min = INT_MAX;
//            if (nums[j] + j >= i)
//            {
//                //˵����j������һ������i
//                if (dp[j] + 1 < min)
//                {
//                    min = dp[j] + 1;
//                }
//            }
//        }
//        dp[i] = min;
//        // printf("dp[%d] = %d\n", i, dp[i]);
//    }
//
//    return dp[numsSize - 1];
//}
//int jump(int* nums, int numsSize) {
//    int begin = 0;
//    int end = 1;
//    int ans = 0;
//    while (end < numsSize)
//    {
//        int maxpos = 0;
//        for (int i = begin; i < end; i++)
//        {
//            if (i + nums[i] > maxpos)
//            {
//                maxpos = i + nums[i];
//            }
//        }
//        begin = end;
//        end = maxpos + 1;
//        ans++;
//    }
//    return ans;
//}
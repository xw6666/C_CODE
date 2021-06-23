#define _CRT_SECURE_NO_WARNINGS 1

//leetcode - 142. 环形链表 II
//typedef struct ListNode Node;
//struct ListNode* detectCycle(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return NULL;
//    }
//
//    Node* fast = head;
//    Node* slow = head;
//
//    while (fast != NULL && fast->next != NULL)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            break;
//        }
//    }
//
//    if (fast == slow)
//    {
//        while (head != slow)
//        {
//            head = head->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//
//    return NULL;
//}

//leetcode - 剑指 Offer 15. 二进制中1的个数
//way1.逐位按位取
//int hammingWeight(uint32_t n) {
//    int cnt = 0;
//    int time = 32;
//    while (time--)
//    {
//        if ((n & 1) == 1)
//        {
//            cnt++;
//        }
//        n = (n >> 1);
//    }
//    return cnt;
//}
//way.2 n&(n - 1)
//int hammingWeight(uint32_t n) {
//    int cnt = 0;
//    while (n != 0)
//    {
//        n = (n & (n - 1));
//        cnt++;
//    }
//    return cnt;
//}

//leetcode - 97. 交错字符串
//bool isInterleave(char* s1, char* s2, char* s3) {
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    int len3 = strlen(s3);
//    if (len1 + len2 != len3)
//    {
//        return false;
//    }
//    if ((len1 == 0) && (len2 == 0) && (len3 == 0))
//    {
//        return true;
//    }
//
//    int dp[len1 + 1][len2 + 1];
//    dp[0][0] = true;
//    int i = 0;
//    for (i = 1; i <= len1; i++)
//    {
//        if (s3[i - 1] != s1[i - 1])
//        {
//            break;
//        }
//        dp[i][0] = true;
//    }
//    if ((i) != (len1 + 1))
//    {
//        for (i = i; i <= len1; i++)
//        {
//            dp[i][0] = false;
//        }
//    }
//
//    for (i = 1; i <= len2; i++)
//    {
//        if (s3[i - 1] != s2[i - 1])
//        {
//            break;
//        }
//        dp[0][i] = true;
//    }
//    if ((i) != (len2 + 1))
//    {
//        for (i = i; i <= len2; i++)
//        {
//            dp[0][i] = false;
//        }
//    }
//
//    for (i = 1; i <= len1; i++)
//    {
//        int j = 1;
//        for (j = 1; j <= len2; j++)
//        {
//            if (dp[i][j - 1] || dp[i - 1][j])
//            {
//                if (dp[i][j - 1] && (dp[i - 1][j] == false))
//                {
//                    if (s3[i + j - 1] == s2[j - 1])
//                    {
//                        dp[i][j] = true;
//                    }
//                    else
//                    {
//                        dp[i][j] = false;
//                    }
//                }
//                else if ((dp[i][j - 1] == false) && dp[i - 1][j])
//                {
//                    if (s3[i + j - 1] == s1[i - 1])
//                    {
//                        dp[i][j] = true;
//                    }
//                    else
//                    {
//                        dp[i][j] = false;
//                    }
//                }
//                else
//                {
//                    if ((s3[i + j - 1] == s2[j - 1]) || (s3[i + j - 1] == s1[i - 1]))
//                    {
//                        dp[i][j] = true;
//                    }
//                    else
//                    {
//                        dp[i][j] = false;
//                    }
//                }
//            }
//            else
//            {
//                dp[i][j] = false;
//            }
//        }
//    }
//    return dp[len1][len2];
//}
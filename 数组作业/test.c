#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	if (len <= 1)
//	{
//		return;
//	}
//	int left = 0;
//	int right = len - 1;
//	char temp = str[left];
//	str[left] = str[right];
//	str[right] = '\0';
//	reverse_string(str + 1);
//	str[right] = temp;
//}
//
//int main()
//{
//	char str[] = "ninijbiub\n";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int x, y, j;
//
//    while (scanf("%d", &x) != EOF) {
// 
//        for (y = 0; y < x; y++)
//        {
//            for (j = 0; j < x; j++)
//            {
//                if (y == 0 || y == x - 1) {
//                    printf("* ");
//                }
//                else if (j == 0 || j == x - 1) {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            //printf("*");
//
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

#include <stdio.h>
void Print(int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("*");
            int j = 0;
            for (j = 0; j < 2 * n - 3; j++)
            {
                printf(" ");
            }
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        Print(n);
        printf("\n");
    }

    return 0;
}
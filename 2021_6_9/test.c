#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������
//int main()
//{
//	int n;
//	int ret[100] = { 0 };
//	int num = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		n = n - 3;
//		sum = sum + n;
//		while (n > 2)
//		{
//			n = n - 2;
//			sum += n;
//		}
//		ret[num++] = sum;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d\n", ret[i]);
//	}
//	return 0;
//}

//int main()
//{         //00001010
//	int a = 10;//���ڴ�����4���ֽڵĿռ䣬���10;S
//	//printf("%p\n", &a);
//	char* pa = &a;     
//	printf("%d\n", *pa);
//	//sizeof(int) - 4byte
//	return 0;
//}


//����һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[12];
//};
//
//struct Book
//{
//	char name[20];
//	int price;
//	char author[20];
//};

//int main()
//{
//	//�����ṹ���������ʼ��
//	struct Stu s1 = { "����",20,"��","20130227" };
//	struct Stu s2 = { "����",30,"Ů","20130222" };
//	struct Stu s3;
//	struct Book b1 = { "C���Գ������",55,"̷��ǿ" };
//
//	printf("����: %s ����: %d �Ա�: %s ѧ��: %s\n", s1.name, s1.age, s1.sex, s1.id);
//	//���ʽṹ�� = �ṹ�����.��Ա��
//	//-> - ���ʽṹ�� = �ṹ��ָ��->��Ա��
//	struct Book* pb = &b1;
//	printf("%s %d %s\n", pb->author, pb->price, pb->name);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\181"));
//	return 0;
//}

//leetcode - 9
//int getDigit(int x)
//{
//    int digit = 0;
//    while (x)
//    {
//        digit++;
//        x /= 10;
//    }
//    return digit;
//}
//
//bool isPalindrome(int x) {
//    int rev = 0;
//    if (x < 0)
//    {
//        return false;
//    }
//    else if (x == 0)
//    {
//        return true;
//    }
//    else
//    {
//        int digit = getDigit(x);
//        if (digit % 2 == 0)
//        {
//            //ż��
//            //reverse
//            for (int i = 0; i < digit / 2; i++)
//            {
//                rev = rev * 10 + x % 10;
//                x /= 10;
//            }
//        }
//        else
//        {
//            //����
//            for (int i = 0; i < digit / 2; i++)
//            {
//                rev = rev * 10 + x % 10;
//                x /= 10;
//            }
//            x /= 10;
//        }
//    }
//    if (x == rev)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

//leetcode - 7
//int reverse(int x) {
//int rev = 0;
//while (x != 0)
//{
//    if (rev < INT_MIN / 10 || rev > INT_MAX / 10)
//    {
//        return 0;
//    }
//    // int dig = x%10;
//    rev = rev * 10 + x % 10;
//    x /= 10;
//}
//return rev;
//}
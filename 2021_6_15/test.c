#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ж��Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int cnt = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//		if (cnt % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//switch���
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("����һ\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("���ڶ�\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("������\n");
//	//}
//	//...
//	
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//leetcode - 852
//int peakIndexInMountainArray(int* arr, int arrSize) {
//    //�������� - O(n)
//    // int max = 0;
//    // int size = 0;
//    // for(int i = 0;i < arrSize;i++)
//    // {
//    //     if(arr[i] > max) 
//    //     {
//    //         max = arr[i];
//    //         size = i;
//    //     }
//    // }
//    // return size;
//
//    //���ֲ���
//    // int left = 1;
//    // int right = arrSize - 2;
//    // while(left < right)
//    // {
//    //     int mid =  (right + left) >> 1;
//    //     if(arr[mid] > arr[mid+1])
//    //     {
//    //         right = mid;
//    //     }
//    //     else
//    //     {
//    //         left = mid + 1;
//    //     }
//    // }
//    // return right;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//continue ����������������ѭ����ߵĴ��룬ֱ�ӵ�whileѭ�����жϲ���
//	//���1234����ѭ��
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������>");
//	scanf("%s", password);//����һ���ո�Ϊֹ
//	//getchar();
//	while ((ch = getchar()) != '\n') //�������ַ����ӻ���������ֱ�����ߵ�һ���س� - �����Ժ󻺳��������Ͼ�û���ַ���
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N)>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	printf("%s\n", password);
//	//EOF - end of file - �ļ�������־
//	//getchar��ȡʧ�ܵ�ʱ��᷵��EOF
//	//1.���ص��ַ����������ַ�Ҳ��ASCII��ֵ��������
//	//2.getchar�����������Ƿ��������ַ������᷵��EOF����-1�����Է������ͱ�����
//	return 0;
//}
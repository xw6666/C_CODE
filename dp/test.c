#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//dp����һ
//��������Ӳ�ң��ֱ���ֵ2Ԫ��5Ԫ��7Ԫÿ��Ӳ�Ҷ����㹻��
//��һ������Ҫ27Ԫ
//��������ٵ�Ӳ��������ø��壬����Ҫ��Ǯ

//��һ����ȷ��״̬
//1.���һ��
//��Ȼ���ǲ�֪�����Ų�����ʲô���������Ų��Կ϶���köӲ�ң�������Ϊ27
//����һ�������һöӲ��ak
//������öӲ�ң�ʣ��Ӳ����ֵΪ27 - ak
//��Ϊ�����Ų��ԣ�����27 - akӲ����һ��Ҫ���٣������ì����
//2.���������
//Ҫ�������ö���öӲ�ҿ���ƴ��27 - ak
//(���ǰ�ԭ����ת������һ�������⣬���ҹ�ģ��С)
//Ϊ�˼򻯶��壬������״̬f(x) = �����ö���öӲ��ƴ��x

//�ڶ�����ת�Ʒ���
//������������
//���ǿ���д��f(27) = min{f(27 - 2), f(27 - 5), f(27 - 7)}
//����x  f(x) = min{f(x - 2), f(x - 5), f(x - 7}

//�����������ǳ�ʼ�����ͱ߽����
//��Ȼ����ʼ����Ϊf(0) = 0
//���Ƕ��������ƴ��f(x),��ôf(x) = ������

//���Ĳ���дѭ��
//����f(0) f(1) f(2)һֱ��f(27)


//leapyear

//void leapYear(int x)
//{
//	//������Ŀ������
//	if ((x % 4 == 0) && (x % 100 != 0))
//	{
//		printf("normal leap year\n");
//	}
//	else if ((x % 100 == 0) && (x % 400 == 0))
//	{
//		printf("century leap year\n");
//	}
//	else
//	{
//		printf("normal year\n");
//	}
//}
//
//int main(void)
//{
//	int n = 0;
//	//n��ʾ�м��鰸����ͨ��scanf����
//	scanf("%d", &n);
//	//����һ������Ϊint��Ԫ�ظ���Ϊn�����������ڴ�Ŷ�������
//	int* nums = (int*)malloc(n * sizeof(int));
//	int num = 0;
//	while (n--)
//	{
//		//ͨ��ѭ����ȡn������
//		scanf("%d", &nums[num]);
//		num++;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		//leapYear���������ж�������ݲ������ĿҪ��
//		leapYear(nums[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	//ch���ַ���row������
//	char ch = 0;
//	int row = 0;
//	scanf(" %c", &ch);
//	scanf("%d", &row);
//	
//	//����ѭ�������ѭ�����ڿ��ƴ�ӡ�������ڲ�ѭ�����ڴ�ӡÿ�е�����
//	int i = 0;
//	for (i = 1; i <= row; i++)
//	{
//		//��һ�д�ӡrow-1���ո񣬵ڶ��д�ӡrow-2����������row-i
//		int j = 0;
//		for (j = 0; j < row - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�ַ�
//		//��i�д�ӡi���ַ�
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch);
//		}
//		//��ӡ��ո���ַ��ǵû���
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	//������ί��
	scanf("%d", &n);
	double score[100];
	//����ÿ����ί����
	int num = 0;
	for (num = 0; num < n; num++)
	{
		scanf("%lf", &score[num]);
	}

	//�ҵ������Сֵ�������Ǹĳ�0��֮����ӳ���n-2�õ�ƽ����
	//max min�ֱ�Ϊ�����Сֵ��maxRes minRes�ֱ�Ϊ�����Сֵ�������±�
	double max = 0;
	int maxRes = 0;
	double min = 0;
	int minRes = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (score[i] > max)
		{
			//ʲô�����max���������max��
			max = score[i];
			maxRes = i;
		}
		if (score[i] < min)
		{
			min = score[i];
			minRes = i;
		}
	}

	score[maxRes] = 0;
	score[minRes] = 0;
	//��ʼ��ƽ��
	double sum = 0.0;
	for (i = 0; i < n; i++)
	{
		sum += score[i];
	}

	double ret = sum / (n - 2);
	printf("%.1f", ret);

	return 0;
}
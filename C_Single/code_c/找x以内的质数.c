#include<stdio.h>       //找x以内的质数
int main()
{
	printf("请输入数字：");
	int x;
	scanf_s("%d", &x);
	int i;
	int a = 2;
	int time = 0;

	for (a = 2; a <= x; a++) {
		int fact = 1;
		if (a == 2) {
			printf("2 ");
			fact = 0;
			time += 1;
		}
		else {
			for (i = 2; i < a; i++) {
				if (a % i == 0) {
					fact = 0;
					break;
				}
			}
		}
		if (fact == 1) {
			printf("%d ", a);
			time += 1;
			if (time % 10 == 0) {
				printf("\n");
			}
		}

	}
	printf("\n");
	printf("上述为%d以内的全部质数，共有%d个\n", x, time);

	return 0;
}
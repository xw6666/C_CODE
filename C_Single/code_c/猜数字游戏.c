#include <stdio.h> //猜数字游戏
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*******************************************\n");
	printf("*********1.开始游戏******0.退出游戏*********\n");
	printf("*******************************************\n");
}
void test()
{
	int n;
	do
	{
		scanf("%d",&n);
		whitch(n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误，请再次输入\n");
			break;
		}
	} while (n);
}
void game()
{
	printf("开始游戏\n");
	printf("我已经在心中想好了一个100以内的数，你能猜到吗？\n请输入数字进行猜数，并按回车键结束输入。\n");
	srand(time(0));
	int a = rand() % 100 + 1;
	int b;
	scanf("%d", &b);
	int time = 1;

	while (b != a)
	{
		if (b < a)
		{
			printf("你猜的数偏小。\n");
			printf("请再次猜一个数：\n");
			scanf("%d", &b);
			time += 1;
		}
		else
		{
			printf("你猜的数偏大。\n");
			printf("请再次猜一个数：\n");
			scanf("%d", &b);
			time += 1;
		}

		if (b == a)
		{
			if (time == 1)
			{
				printf("你是不是开挂了？\n");
			}
			else if (time < 7)
			{
				printf("恭喜你猜对了！\n你一共猜了%d次，你好牛呀。\n", time);
			}
			else
			{
				printf("恭喜你猜对了！\n你一共猜了%d次，你好菜呀。\n", time);
			}
		}
	}
}
int main(void)
{

	test();

	return 0;
}
#include <stdio.h>

void sort(int a, int b)
{
	if (a < b)
	{
		int cup = a;
		a = b;
		b = cup;
	}
}

int main(void)
{
	int a, b;
	int r = 1;
	scanf("%d %d", &a, &b);

	sort(a, b);

	while (r > 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	printf("%d", a);

	return 0;
}
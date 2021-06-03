#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b, c;
	float delta;
	scanf("%f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		float qian = -b / (2 * a);
		float hou = sqrt(fabs(delta));
		printf("The equation has complex roots:\n%f+%fi\n%f-%fi\n", qian, hou, qian, hou);
	}
	else if (delta == 0)
	{
		float result = (-b) / (2 * a);
		printf("The equationhas two equal roots:%f\n", result);
	}

	return 0;
}
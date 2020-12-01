#include <stdio.h>
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
int main()
{
	float num = 0;
	float sum = 0;
	for (float i = 1; i < 100; i+=2)
	{
		num = (1 / i) - 1 / (i + 1);
		sum += num;
	}
	printf("%f\n", sum);
	return 0;
}
#include<stdio.h>
int main()
{
//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j >= i)
		{
			printf("%d", i);
		}
	}
	return 0;
}
#include <stdio.h>
int main()
{
	//打印1-100以内3的倍数
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
			i++;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
#include <stdio.h>
/*
	写一个函数，实现判断素数的功能,并且输出100-200之间的素数；
*/
void PrimeNumber(num)
{
	int i;
	for ( i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			break;
		}
		else if ((i + 1) == num)
		{
			printf("%d   ", num);
		}
	}
	
}
int main()
{
	for (int i = 100; i < 201; i++)
	{
		PrimeNumber(i);
	}
	return 0;
}
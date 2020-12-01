#include <stdio.h>
int main()
{
	for (int i = 100; i <= 200; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}

			if (i == j + 1)
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}
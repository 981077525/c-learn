#include <stdio.h>
int main()
{
	int a = 77;
	int b = 21;

	int c;

	while (1)
	{
		c = a % b;
		if (c == 0)
		{
			break;
		}
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
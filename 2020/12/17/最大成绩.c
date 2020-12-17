#include<stdio.h>
int max(int a, int b, int c)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	return a;
}
int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		printf("%d\n", max(a, b, c));
	}
	return 0;
}
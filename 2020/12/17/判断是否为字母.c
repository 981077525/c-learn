#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	while (scanf("%c\n", &a) == 1)
	{
		if (isalpha(a))
		{
			printf("%c is an alphabet.\n", a);
		}
		else
		{
			printf("%c is not an alphabet.\n", a);
		}

	}
	return 0;
}
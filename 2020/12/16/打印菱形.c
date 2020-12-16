#include<stdio.h>
//打印一个菱形
int main()
{
	printf("             *            \n");
	printf("           * * *          \n");
	printf("         * * * * *        \n");
	printf("       * * * * * * *      \n");
	printf("     * * * * * * * * *    \n");
	printf("   * * * * * * * * * * *  \n");
	printf(" * * * * * * * * * * * * *\n");
	printf("   * * * * * * * * * * *  \n");
	printf("     * * * * * * * * *    \n");
	printf("       * * * * * * *      \n");
	printf("         * * * * *        \n");
	printf("           * * *          \n");
	printf("             *            \n");

	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 7 - i; k++)
		{
			printf("  ");
		}
		for (int j = 0; j < (2 * i) - 1; j++)
		{
			
			printf(" *");
		}
		printf("\n");
	}
	for (int i = 6; i >0 ; i--)
	{
		for (int k = 0; k < 7 - i; k++)
		{
			printf("  ");
		}
		for (int j = 0; j < (2 * i) - 1; j++)
		{

			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
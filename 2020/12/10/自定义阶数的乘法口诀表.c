#include <stdio.h>
int main()
{
	int num;
	printf("请输入你要打印乘法口诀表的阶数：");
	scanf("%d",&num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%2d * %2d = %3d  ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}